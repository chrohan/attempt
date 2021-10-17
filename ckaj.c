#include <stdio.h>
int main()
{
    int x1, y1, x2, y2, x3, y3;
    printf("coordinate of point A is\n");
    scanf("%d%d", &x1, &y1);
    printf("coordinates of point B is\n");
    scanf("%d%d", &x2, &x2);
    printf("coordinates of point C is\n");
    scanf("%d%d", &x3, &y3);

    float m1, m2;
    m1 = (y2 - y1) / (x2 - x1);
    m2 = (y3 - y2) / (x3 - x2);
    if (m1 == m2)
        printf("all the three points lie on same line");
    else
        printf("all the three points do not lie on same line");
}