#include <stdio.h>

int main(void)
{
    double n, a1, an;

    while (scanf("%lf %lf %lf", &n, &a1, &an) == 3)
        printf("S = %.6f\n", n * (a1 + an) / 2);

    return 0;
}
