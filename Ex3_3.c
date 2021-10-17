#include <stdio.h>
int main()
{

    int cp, sp;
    int loss,profit;


    printf("enter cost price and selling price\n");
    scanf("%d%d", &cp, &sp);
    loss= cp-sp;
    profit=sp-cp;
    if (cp > sp)
        printf("loss= %d\n",loss);
    else
        printf("profit= %d",profit);
     
    



    return 0;
}