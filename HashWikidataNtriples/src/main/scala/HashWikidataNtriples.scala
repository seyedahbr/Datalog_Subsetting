import org.apache.spark.sql.SparkSession
import org.apache.spark.sql.functions.expr

object HashWikidataNtriples {
  def main(args: Array[String]): Unit = {
    val spark = SparkSession.builder()
      .appName("HashWikidataNtriples")
      .getOrCreate()

    val inputFile = args(0)
    val hashtableFile = args(1)
    val dfFile = args(2)

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

    // Create a new dataset by replacing each cell of the first three columns with its hash value
    val hashedDF = df.withColumn("_c0", expr("hash(_c0)"))
      .withColumn("_c1", expr("hash(_c1)"))
      .withColumn("_c2", expr("hash(_c2)")).select("_c0", "_c1", "_c2")

    // Save the first three columns as a new dataset in CSV format    
    hashedDF.write
      .format("csv")
      .save(dfFile)

    // Stop SparkSession
    spark.stop()
          
  }
}

