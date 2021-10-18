#include <stdio.h>
int main()
{
    int weight;
    printf("enter wt in pounds\n");
    scanf("%d", &weight);

    if (weight < 115)
        printf("flyweight\n");
    else if (weight >= 115 && weight <= 121)
        printf("Bantamweight\n");
}