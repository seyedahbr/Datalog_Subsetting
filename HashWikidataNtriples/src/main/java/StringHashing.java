public class StringHashing {
    public static void main(String[] args) {
        if (args.length < 1) {
            System.out.println("Please provide a string as a command-line argument.");
            return;
        }

        String inputString = args[0];
        int hashCode = inputString.hashCode();
        System.out.println("Hash code of '" + inputString + "': " + hashCode);
    }
}
