#include <stdio.h>

#define COEF 1000

int main(void)
{
    long long j;

    while (scanf("%lld", &j) == 1 && j > 0)
        printf("%lld Дж = %lld кДж %lld Дж\n", j, j / COEF, j % COEF);

    return 0;
}
