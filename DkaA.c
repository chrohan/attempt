#include<stdio.h>
int main()
{
  if ( year%100 == 0 && year%400==0)
    {
        printf("leap year\n");
    }else if(year%100 == 0){
        printf("not leap");
    }else if( year % 4 == 0){
        printf("leap");
    }else{
        printf("not leap");
    }









   








}