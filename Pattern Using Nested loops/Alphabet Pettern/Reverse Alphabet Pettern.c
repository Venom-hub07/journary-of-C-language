#include <stdio.h>
void main(){
    int i, j;
    for(i=101; i>=97; i--)// Loop for rows, starting from 101 (ASCII value of 'e') and decrementing till 97 (ASCII value of 'a')
    { 
        for(j=97; j<=i; j++)// Loop for columns, starting from 97 (ASCII value of 'a') and incrementing till i
        { 
            printf("%c ",j); // Print the character corresponding to the ASCII value of j followed by a space
        }
        printf("\n"); // Move to the next line after printing each row
    }
}
/*
Explanation:
1. The code starts with the main function, which is the entry point of the program.
2. Two integer variables i and j are declared to be used as loop counters.
3. The outer loop is a for loop that starts with i=101 and continues as long as i is greater than or equal to 97. It decrements i by 1 in each iteration.
4. Inside the outer loop, there is an inner loop, also a for loop, which starts with j=97 and continues as long as j is less than or equal to i. It increments j by 1 in each iteration.
5. Inside the inner loop, the printf function is used to print the character corresponding to the ASCII value of j, followed by a space.
6. After printing each row, the printf function is used again to print a newline character ("\n"), which moves the cursor to the next line.
7. The inner loop continues until the condition j<=i is no longer true.
8. After the inner loop completes, the outer loop continues until the condition i>=97 is no longer true.
9. Once the outer loop finishes, the main function ends, and the program terminates.


a b c d e 
a b c d 
a b c 
a b 
a 

*/