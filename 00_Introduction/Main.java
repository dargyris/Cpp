public class Main{

    public static void main ( String[] args ){

        System.out.print("\033[H\033[2J");

        int testScore_1 = 0;
        System.out.println( "testScore_1: " + testScore_1 );
        int testScore_2 = 0;
        System.out.println( "testScore_2: " + testScore_2 );

        int[] myArray_1 = new int[5];
        printArray(myArray_1);
        System.out.println( "myArray length:" + myArray_1.length );
    }

    public static void printArray( int[] array ){
        for( int i = 0; i < array.length; i++ ){
            System.out.println( "Element [" + i + "]\t: " + array[i] );
        }
    }

}
