#include<stdio.h>
int main()
{
int x;
int absolute;
printf("enter a number\n");
scanf("%d",&x);
if(x>0)
{
    absolute = x;
    printf("absolute value of x is %d",absolute);
}
else
{   absolute = x*(-1);
   printf("absolute value of x is %d",absolute);
}




}