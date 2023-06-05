import org.apache.spark.sql.SparkSession

object NTriplesDelimiterConverter {
  def main(args: Array[String]): Unit = {
    if (args.length != 2) {
      println("Usage: spark-submit --class NTriplesDelimiterConverter <jar-file> <input-file> <output-file>")
      System.exit(1)
    }

    val inputPath = args(0)
    val outputPath = args(1)

    val spark = SparkSession.builder()
      .appName("NTriplesDelimiterConverter")
      .getOrCreate()

    try {
      val ntriples = spark.read.text(inputPath)

      val converted = ntriples.withColumn("converted", org.apache.spark.sql.functions.regexp_replace(ntriples("value"), " ", ","))

      converted.select("converted").write.text(outputPath)
    } finally {
      spark.stop()
    }
  }
}

