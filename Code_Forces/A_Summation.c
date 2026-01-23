#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);

    long long sum = 0;
    long long x;

    for (int i = 0; i < N; i++) {
        scanf("%lld", &x);
        sum += x;
    }

    if (sum < 0)
        sum = -sum;

    printf("%lld\n", sum);

    return 0;
}
