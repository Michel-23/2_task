#include <stdio.h>
#include <math.h>

int main (void)
{
    int a,b;
    scanf("%d %d", &a, &b);
    printf("%lf\n", (double)(a*a+b*b)/2);
    printf("%lf", (double)(fabs(a)+fabs(b))/2);
    return 0;
}
