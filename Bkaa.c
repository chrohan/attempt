#include <stdio.h>
int main()
{
    int hours, x, pay;
    x = 0;
    

    while (x < 10)
    {
        printf("enter  hours\n");
    scanf("%d", &hours);
    pay = 12 * hours;
        printf("pay = Rs %d \n", pay);
        x = x + 1;
    }
}