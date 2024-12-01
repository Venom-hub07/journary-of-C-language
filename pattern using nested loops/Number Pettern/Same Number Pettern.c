#include <stdio.h>

void main(){
    int i,j;

    // Outer loop to control the number of rows
    for(i=1; i<=5; i++){

        // Inner loop to print the number 'i' 'i' number of times
        for ( j=1; j<=i; j++){
            printf("%d",i);  // Print the value of 'i'
        }

        printf("\n");  // Move to the next line after each row
    }
}
/*

Explanation:
- The code starts by including the necessary header file `stdio.h` which contains the declaration of the `printf` function.
- The `main` function is defined as `void`, which means it does not return any value.
- Two integer variables `i` and `j` are declared to control the loops.
- The outer loop runs from `1` to `5` (inclusive) to control the number of rows.
- Inside the outer loop, there is an inner loop that runs from `1` to the current value of `i`. This inner loop controls the number of times the value of `i` is printed.
- The `printf` statement inside the inner loop prints the value of `i`.
- After the inner loop finishes, a newline character (`\n`) is printed using `printf` to move to the next line.
- This process is repeated until the outer loop completes all iterations.

1
22
333
4444
55555

*/