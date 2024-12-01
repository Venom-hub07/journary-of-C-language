#include <stdio.h>
void main(){
    int i, j;
    // Loop for printing rows from 'a' to 'e'
    for(i=97; i<=101; i++){
        // Loop for printing characters from 'a' to current row number
        for(j=97; j<=i; j++){
            printf("%c ",j);
        }
        printf("\n");
    }
}

/*
1.The code starts with the main function. Inside the main function, two integer variables i and j are declared.
2.The first loop is a for loop that iterates from 97 to 101. The variable i is used to control the loop and represents the ASCII value of the character 'a' to 'e'.
3.Inside the first loop, there is another loop, a nested for loop. This loop iterates from 97 to the current value of i. The variable j is used to control this loop and represents the ASCII value of the character 'a' to the current row number.
4.Inside the nested loop, the printf function is used to print the character represented by the current value of j, followed by a space.
5.After the nested loop, the printf function is used again to print a newline character, which moves the cursor to the next line.
6.1This process repeats for each iteration of the first loop, resulting in the output of the characters in a pyramid-like pattern:

a 
a b 
a b c 
a b c d 
a b c d e
*/