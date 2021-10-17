#include<stdio.h>
int main()
{
int a,b,c;
printf("enter ages of Ram, Shyam and Ajay\n");
scanf("%d%d%d",&a,&b,&c);
if(a<b)
{
    if(a<c)
    
        printf("Ram is the youngest");
}
if(b<a)
{ 
    if(b<c)
    printf("Shyam is the youngest");

}
if(c<a)
{
    if(c<b)
    printf("Ajay is the youngest");
}





}