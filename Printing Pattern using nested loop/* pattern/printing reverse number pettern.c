#include<stdio.h> 

void main(){
    int i, j;

    // Loop to iterate from 5 to 1
    for (i=5; i>=1; i--){
        
        // Loop to print numbers from 1 to i
        for(j=1; j<=i; j++){
          
            printf("%d ",j);
        
        }
            
        printf("\n"); 
    }
}
