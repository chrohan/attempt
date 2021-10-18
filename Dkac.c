#include<stdio.h>
int main()
{

int hrdns,ts;
float cc;
printf("enter the value of hardness, carbon content and tensile strength of steel\n");
scanf("%d%f%d",&hrdns,&cc,&ts);

if( hrdns>50 && cc<0.7 && ts>5600 )
  printf("grade 10 steel\n");
 
else if( hrdns>50 && cc<0.7 ) 
  printf("grade 9 steel\n");

else if( cc<0.7 && ts>5600 )
  printf("grade 8 steel\n");

else if( hrdns>50 && ts>5600 )
  printf("grade 7 steel\n");

else if (( hrdns>50 && !cc<0.7 && !ts>5600 )||( !hrdns>50 && !cc<0.7 && ts>5600 )||( !hrdns>50 && cc<0.7 && !ts>5600 ))
  printf("grade 6 steel\n");

else
  printf("grade 5 steel");


















}