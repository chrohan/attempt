#include<stdio.h>
int main() {
 
int jyear;
int cyear;

printf ("enter the year joined and current year\n");
scanf ("%d%d",&jyear,&cyear);
printf ("jyear = %d current year = %d",jyear,cyear);

int exp= cyear-jyear;

if (exp>3)
{
  int bonus=2500;
  printf("bonus= %drupees",bonus);
}




 }


 


