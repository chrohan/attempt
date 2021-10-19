#include<stdio.h>
int main()
    {
       int number,x,factorial=1;
       x=1;
       printf("enter a number\n");
       scanf("%d",&number);
    
      while ( x<=number )
    
      {
        factorial=factorial*x;
        x++;
        
      }
      

printf("factorial = %d", factorial);






    }
