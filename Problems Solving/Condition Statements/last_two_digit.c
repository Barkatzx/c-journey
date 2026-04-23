#include <stdio.h>

int main() {
    long long int a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    long long int x = 1;

    x = (x * (a % 100)) % 100;
    x = (x * (b % 100)) % 100;
    x = (x * (c % 100)) % 100;
    x = (x * (d % 100)) % 100;

    printf("%02lld\n", x);

    return 0;
}