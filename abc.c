#include <stdio.h>
int main()
{

    int x;
    printf("enter a five digit number\n");
    scanf("%d", x);
    int l = x % 10;
    int m = (x / 10) % 10;
    int n = (x / 100) % 10;
    int o = (x / 1000) % 10;
    int p = x / 10000;
    int y = 10000 * p + 1000 * o + 100 * n + 10 * m + l;
    if (x == y)
        printf("x and y are equal");
    else
        printf("x and y are not equal");
}