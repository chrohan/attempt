#include<stdio.h>
int main()
{
   
int x,n,temp,socod=0;

printf("enter a number\n");
     scanf("%d",&n);
temp=n;
while(n>0)
{
x = n%10;   
socod= socod+ x*x*x;
n = n/10;


}

if(socod == temp)
printf("armstrong number\n");
else
printf("not an armstrong number");



return 0;

}