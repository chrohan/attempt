#include<stdio.h>
int main()
{
 
 int a,b,c;
 printf("enter the three sides of the triangle\n");
 scanf("%d%d%d",&a,&b,&c);

  if( (a+b)>c && (b+c)>a && (a+c)>b )
    printf("triangle is valid\n");
  else
    printf("triangle is not valid");
    














}