#include<stdio.h>
int main()
{
    int a,b,c;
 printf("enter the three sides of the triangle\n");
 scanf("%d%d%d",&a,&b,&c);

// if(a==b && b==c )
// printf("equilateral triangle\n");
// else if((a==b && b!=c && c!=a)||(a!=b && b==c && a!=c)||(a!=b && b!=c && a==c))
// printf("isoceles");
// else if(a!=b && b!=c && a!=c) 
// printf("scalene triangle");




if((a!=b && b!=c && a!=c) && ((a*a + b*b == c*c || a*a + c*c == b*b || c*c + b*b == c*c))){
    printf("right angled triangle");}
    else if(a!=b && b!=c && a!=c)
    printf("scalene");


else if(a == b && b == c){
    printf("eq");
}else{
    printf("isoceles");
}


return 0;










}