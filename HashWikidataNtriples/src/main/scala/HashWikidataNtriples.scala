import org.apache.spark.sql.{SparkSession, Row}
import org.apache.spark.sql.types.{IntegerType, StructField, StructType, StringType}

object HashWikidataNtriples {
  def main(args: Array[String]): Unit = {
    // Create SparkSession
    val spark = SparkSession.builder()
      .appName("HashWikidataNtriples")
      .getOrCreate()

    val inputFile = args(0)
    val outputFile = args(1)

    // Read the CSV file with tab delimiter
    val df = spark.read
      .option("delimiter", ",")
      .csv(inputFile)

    // Select the first three columns    
    val selectedColumns = df.select("_c0", "_c1", "_c2")
    
    // Map each cell to its hash code in a dictionary (the hashtable)
    val dictionary = selectedColumns.rdd
      .flatMap(row => row.toSeq.map(_.toString).zip(row.toSeq.map(_.hashCode)))
      .collectAsMap()

    // Create the hashed output RDD
    val hashRDD = selectedColumns
      .rdd
      .map(row => (dictionary.getOrElse(row.getString(0), 0), dictionary.getOrElse(row.getString(1), 0), dictionary.getOrElse(row.getString(2), 0)))
    
    // Define the schema for the hashed DataFrame dataset
    val schema = StructType(Seq(
      StructField("_c0", IntegerType, nullable = false),
      StructField("_c1", IntegerType, nullable = false),
      StructField("_c2", IntegerType, nullable = false)
    ))

    // Create DataFrame from RDD with the defined schema
    val dfHash = spark.createDataFrame(hashRDD.map(Row.fromTuple), schema)

    // Save the hashed DataFrame as a new CSV file
    dfHash.write.csv(outputFile)

    // Save the dictionary as the hashtable
    val hashTableRDD = spark.sparkContext.parallelize(dictionary.toSeq)
      .map { case (key, value) => s"$key, $value" }
    hashTableRDD.coalesce(1).saveAsTextFile(inputFile + "_hashtable")

    // Stop the SparkSession
    spark.stop()
  }
}
