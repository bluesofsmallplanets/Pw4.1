#include <stdio.h>

int main(void)
{
    int n, i = 0;
    int a = 0, b = 1, t;

    if (scanf("%d", &n) != 1)
        return 0;

    while (i < n) {
        printf(i ? " %d" : "%d", a);
        t = a + b;
        a = b;
        b = t;
        i++;
    }
    printf("\n");

    return 0;
}
