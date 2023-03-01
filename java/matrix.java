import java.io.*;
import java.util.Scanner;

public class matrix{
    public static void main(String[] args){
        int m. n;
        int matrix[][] = new int[m][n];
        // here m and n are the number of columns and rows 
        // taking input from the userr !! 
        Scanner sc = new Scanner(System.in)
        System.out.println("Enter the number of rows and columns");
        m = sc.nextInt();
        n = sc.nextInt();
        int matrix_2[][] = new int[m][n;
        ]
        System.out.println("Enter the number of the first matrix");
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                matrix[i][j] = sc.nextInt();
            }
        }
        // taking input for the second matrix :: 
        System.out.println("Enter the elements for the second matrix");
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                matrix_2[m][n] = sc.nextInt();
            }
        }

        int product[][] = new int[m][n];
        // doing the product !! 
        // matrix 1 and matrix 2 :: 
        
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                for(int k = 0; k < m; k++){
                    sum = sum + matrix[m][n] * matrix_2[m][n];
                }
            }
        }
    }
}