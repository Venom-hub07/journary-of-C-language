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

/*
This code is written in the C programming language and it displays a pattern of numbers. Here's how the code works:

1. We declare three integer variables: i, j, and k.
2. We use a for loop to iterate over the values of i from 1 to 5.
3. Inside the outer loop, we have two nested for loops.
4. The first nested loop uses variable j to print spaces before the numbers. It starts from 1 and goes up to 5-i.
5. The second nested loop uses variable k to print the numbers. It starts from 1 and goes up to i.
6. After printing the numbers, we print a new line.
7. The outer loop continues until i reaches 5, and the pattern is printed.

The output of this code will be:

    1
   12
  123
 1234
12345

Each line represents a row of numbers, with spaces before the numbers to create a triangular pattern. The numbers are printed in ascending order from 1 to i in each row.
*/