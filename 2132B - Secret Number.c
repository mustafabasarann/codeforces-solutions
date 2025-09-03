#include <stdio.h>

long long int power(long long int base, int exp) {
    long long int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long int n;
        scanf("%lld", &n);

        long long int results[20];
        int cnt = 0;

        for (int k = 1; k <= 18; k++) {
            long long int d = power(10, k) + 1; 

            if (n % d == 0) {
                results[cnt++] = n / d;
            }
        }

        if (cnt == 0) {
            printf("0\n");
        } else {
            printf("%d\n", cnt);
            for (int i = cnt-1; i >= 0; i--) {
                printf("%lld ", results[i]);
            }
            printf("\n");
        }
    }

    return 0;
}
