public class datatypes{
    public static void main(String[] args){
        boolean a = true;
        System.out.println(a);

        int array[];
        array = new int[3];
        array[2] = 5;
        
        // printing the elements of the array :: 
        for(int i = 0; i < 5; i++){
            System.out.println(array[i]); 
            // will throw exception that the array is out of bound !! 
        }
    }
}