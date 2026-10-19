#include <stdio.h>

int main(void)
{
    int n, i = 0;
    unsigned long long a = 0, b = 1, t;

    if (scanf("%d", &n) != 1)
        return 0;

    while (i < n) {
        printf(i ? " %llu" : "%llu", a);
        t = a + b;
        a = b;
        b = t;
        i++;
    }
    printf("\n");

    return 0;
}
