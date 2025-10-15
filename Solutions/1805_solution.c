#include <stdio.h>

int main() {
    long long A, B;
    scanf("%lld %lld", &A, &B);

    long long sumB = B * (B + 1) / 2;
    long long sumA = (A - 1) * A / 2;

    printf("%lld\n", sumB - sumA);

    return 0;
}
