#include <stdio.h>
#include <math.h>

int is_prime(long long int num) {
    for(long long int i = 2; i <= num / i; i++) {
        if(num % i == 0) return 0;
    }
    return 1;
}

int find_largest_prime(long long int num) {
    for(long long int i = num / 2; i >= 2 ; i--) {
        if(num % i == 0 && is_prime(i)) 
            return i;
    }
    return num;
}

int main() {
    long long int num = 600851475143;
    long long int ans = find_largest_prime(num);
    printf("%lld\n", ans);
}