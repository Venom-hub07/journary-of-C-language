#include<stdio.h>
/*This code prints the ASCII table from 0 to 127.
 It uses a for loop to iterate through the numbers and prints the corresponding character using the printf function. 
 The format specifier %d is used to print the number and %c is used to print the character. 
 The output will display the number and its corresponding character in the ASCII table.#include<stdio.h>
 */
int main(){
    int i;
    for (i =0; i <=127; i++)
    {
    // Print the ASCII TABLE value and its corresponding character
    printf("the ASCII TABLE %d is %c\n",i,i);
    }

return 0;
}