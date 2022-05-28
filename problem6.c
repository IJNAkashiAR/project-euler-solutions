#include <stdio.h>

int main() {
    int sum = 5050 * 5050;
    for(int i = 1; i <= 100; i++) {
        sum -= i * i;
    }
    printf("%u\n", sum);
    return 0;
}