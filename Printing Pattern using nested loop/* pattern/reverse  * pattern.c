#include<stdio.h>
void main(){
    int i, j;
    
    // Outer loop to control the number of rows
    for (i = 5; i >= 1; i--)
    {    
        // Inner loop to control the number of columns
        for (j = 1; j <= i; j++)
        {   
            // Print a star followed by a space
            printf("* ");
        }
        
        // Move to the next line after printing each row
        printf("\n");
    }
}
