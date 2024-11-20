#include<stdio.h> 
/**
 * This code prints a pattern of numbers in the form of a right-angled triangle.
 * The outer loop controls the number of rows in the triangle, and the inner loop
 * prints the numbers in each row. The numbers in each row start from 1 and go up to 
 * the current row number. After printing each row, a new line is printed to start
 * the next row. 
 */
void main(){
    int i, j;

    // Outer loop for printing rows
    for (i=1; i<=5; i++){
        
        // Inner loop for printing numbers in each row
        for(j=1; j<=i; j++){
            printf("%d ",j);
        }
            
        printf("\n"); // Move to the next line after each row is printed
    }
}
