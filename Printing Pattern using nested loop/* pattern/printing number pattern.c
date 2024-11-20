#include<stdio.h> 
/**
 * This code prints a pattern of asterisks in a triangular shape.
 * The outer loop controls the number of rows, and the inner loop controls the number of columns in each row.
 * Each row contains an increasing number of asterisks, starting from one in the first row.
 * After printing each row, a new line is printed to create the triangular shape.
 */   
void main(){
    int i, j;

    // Outer loop to control the number of rows
    for (i=1; i<=5; i++){
       
        // Inner loop to control the number of columns in each row
        for(j=1; j<=i; j++){
         
            printf("%d ",j);

        }
            
        printf("\n"); // Print a new line after each row
    }
}