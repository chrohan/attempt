#include<stdio.h>
int main()
{
int l,b,area,per;
printf("enter the value of lengh and breadth\n");
scanf("%d%d",&l,&b);
area=l*b;
per= 2*(l+b);
if(area>per)
printf("area is greater than perimeter");
else
printf("perimeter is greater than area");







}