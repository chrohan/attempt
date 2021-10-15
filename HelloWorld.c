#include<stdio.h>
int main() {
 
int salary;
float hra,da,gross;

printf("enter salary: ");
scanf("%d",&salary);

if (salary<1500){ 
          hra= 0.1*salary;
          da= 0.9*salary;
}
else{
          hra= 500;
          da= 0.98*salary;
         
}

gross = salary+hra+da;
printf("gross salary= %f Rupees",gross);

}


 


