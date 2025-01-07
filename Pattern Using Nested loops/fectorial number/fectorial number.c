#include<stdio.h>
    void main(){
        int n, i,fect=1;
        printf("Enter a Number: ");
        scanf("%d", &n);
        for(i=1; i<=n; i++){
            
            fect = fect*i;
        }
        printf("Fectorial of the Number is: %d",fect);
        
    }
