import org.apache.spark.sql.{SparkSession, Row}
import org.apache.spark.sql.types.{IntegerType, StructField, StructType}

object HashWikidataNtriples {
  def main(args: Array[String]): Unit = {
    val spark = SparkSession.builder()
      .appName("HashWikidataNtriples")
      .getOrCreate()

    val inputFile = args(0)
    val dfFile = args(1)
    val hashtableFile = args(2)

    // find out the proper delimiter
    val ext = inputFile.split("\\.").last
    val delimiter = ext match {
      case "csv" => ","
      case "tsv" => "\t"
      case "nt" => " "
      case _ => throw new UnsupportedOperationException(s"File extension is: $ext. Expected csv|tsv|nt")
    }

    // Read the CSV file with the proper delimiter
    val df = spark.read
      .format("csv")
      .option("delimiter", delimiter)
      .load(inputFile)

    // Create a hash table of cells based on the Java String.hashCode of the first three columns
    if (hashtableFile != "no-hashtable"){
      val hashTableRDD = df.rdd.flatMap(row => {
        val hashTable = scala.collection.mutable.HashMap.empty[String, Int]
        val hash1 = row.getString(0).hashCode
        val hash2 = row.getString(1).hashCode
        val hash3 = row.getString(2).hashCode

        // Add the hash values to the hash table
        hashTable(row.getString(0)) = hash1
        hashTable(row.getString(1)) = hash2
        hashTable(row.getString(2)) = hash3

        hashTable
      }).distinct()

      // Save the hash table for future mapping
      hashTableRDD.saveAsTextFile(hashtableFile)
    }

    // Create a new dataset by replacing each cell of the first three columns with its hash value
    // Select the first three columns and map each cell to its hash code
    val hashRDD = df.select("_c0", "_c1", "_c2")
      .rdd
      .map(row => (row.getString(0).hashCode, row.getString(1).hashCode, row.getString(2).hashCode))

    // Define the schema for the DataFrame
    val schema = StructType(Seq(
      StructField("_c0", IntegerType, nullable = false),
      StructField("_c1", IntegerType, nullable = false),
      StructField("_c2", IntegerType, nullable = false)
    ))

    // Create DataFrame from RDD with the defined schema
    val dfHash = spark.createDataFrame(hashRDD.map(Row.fromTuple), schema)

    // Save the hashed DataFrame as a new CSV file
    dfHash.write
      .option("header", false)
      .csv(dfFile)


    // Stop SparkSession
    spark.stop()
          
  }
}

