#include<stdio.h>
    int add();
    int sub();
    int mul();
    int div();
    int rem();
        
        void main(){
         int a,b,c,x,s,m,d,r;
        x = add();
        s = sub();
        m =mul();
        d = div();
        r =rem();
        printf("Enter the value of a and b: ");
        scanf("%d%d",&a,&b);
        printf("addition= %d\n,subtraction= %d\n,multiplication= %d\n,division= %d\n,remainder= %d\n",x,s,m,d,r);
      
     }
     int add(){
        c = a+b;
        return (c);
      }

     int sub(){
        c = a-b;
         return(c);
      }
      
      int mul(){
        c = a*b;
        return(c);
      }
      int div(){
         c = a/b;
         return(c);
      }
      int rem(){
         c = a%b;
         return(c);
      }