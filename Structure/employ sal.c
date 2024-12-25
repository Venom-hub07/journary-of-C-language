#include<stdio.h>
    void main(){

        int hra, da, ta,i;
        float net_sal;
            struct employee
            {
                int emp_id;
                char emp_name[30];
                float basic_sal;
            }a[50];   //Variable or object of structure

 // variable can be written as:      struct employee  a;
    
        for(i=0 ; i<=50; i++){
// information of employee        
        printf("Enter the employee id: ");
        scanf("%d",&a[i].emp_id);
        
        printf("Enter Name: ");
        scanf("%s",a[i].emp_name);
        
        printf("Enter the basic salary: ");
        scanf("%f",&a[i].basic_sal);


// calculation of salary
        da = a[i].basic_sal*20/100;
        hra = a[i].basic_sal * 10/100;
        ta = a[i].basic_sal * 5/100;
        net_sal = a[i].basic_sal + da + hra + ta;

// printing the salary and employee details
        printf("Employee id: %d\n",&a[i].emp_id);
        printf("Employee Name: %s\n",&a[i].emp_name);
        printf("Employee basic salary: %f\n",&a[i].basic_sal);
        printf("Employee Net Salary is: %f\n",net_sal);
        printf("Employee Da is: %d\n",da);
        printf("Employee HRA is: %d\n",hra);
        printf("Employee TA is: %d\n",ta);        
        }
    }