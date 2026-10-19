#include <stdio.h>

double bit_to_byte(double bit)
{
    const double k = 8;
    return bit / k;
}

int main(void)
{
    double value;

    while (scanf("%lf", &value) == 1)
        printf("%.2f\n", bit_to_byte(value));

    return 0;
}
