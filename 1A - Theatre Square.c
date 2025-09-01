#include <stdio.h>

int main() {

    long long int m,n,a;

    scanf("%lld %lld %lld", &m, &n, &a);

    long long int result = ((m/a) + (m%a != 0)) * ((n/a) + (n%a != 0));
    printf("%lld", result);
    return 0; 
}