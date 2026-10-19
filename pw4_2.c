#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint16_t d1, d2;
    float s;

    if (scanf("%hu %hu", &d1, &d2) != 2)
        return 0;

    s = (float)d1 * d2 / 2;

    printf("Результат: %.2f\n", s);
    printf("sizeof(uint16_t) = %llu\n", (unsigned long long)sizeof(uint16_t));
    printf("sizeof(float) = %llu\n", (unsigned long long)sizeof(float));

    return 0;
}
