#include<stdio.h>
#include<conio.h>
                                                    // THIS IS CODE FOR FEBONACCI SERIES...
/*
* This code defines a function `main` in the C programming language. 
* It initializes variables `a`, `b`, `c`, `n`, and `i`. It then prints the values of `a` and `b` using the `printf` function. 
* The code prompts the user to input a value for `n` using the `scanf` function. 
* A `for` loop is used to perform a sequence of calculations. 
* Inside the loop, the value of `c` is calculated as the sum of `a` and `b`.
* The value of `a` is then updated to the current value of `b`, and the value of `b` is updated to the current value of `c`. 

* The loop continues for `n` iterations.
*/


    void main(){
       int a=0,b=1, c ,n, i;
        printf("%2d",a);
        printf("%3d",b);
          
                scanf("%3d",&n);

         for(i=1; i<=n; i++){
            c=a+b;
            a=b;            //this is use for storing the value of b in a, after this b variable will empty after that a=1;  b= empty;
            b=c;            //this is use for shifting the value of c in b, after this c variable will empty  and ready for restoring the next value
         }   

    }