#include<stdio.h>
void main(){
    int i, j, k; // Declare variables i, j, and k
    
    for(i= 1; i<= 5; i++) // Loop from i=1 to i=5
    {
        for ( j = 1; j <= 5-i; j++) // Loop from j=1 to j=5-i
        {
            printf(" "); // Print a space
        }
        
        for ( k = 1; k <=i; k++) // Loop from k=1 to k=i
        {
            printf("%d",k); // Print the value of k
        }
        
        printf("\n"); // Print a new line
    }
}