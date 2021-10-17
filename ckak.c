#include<stdio.h>
int main()
{

float x,y;
printf("enter the coordinate of the point\n");
scanf("%f%f",&x,&y);

if((x==0)&&(y==0))
printf("point lies on origin\n");
else{
if(x==0)
printf("point lies on y axis\n");
if(y==0)
printf("point lies on x axis\n");
}









}