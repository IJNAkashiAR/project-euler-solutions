#include <stdio.h>

int main() {
    int max = 4000000;
    int first = 1;
    int second = 1;
    int new_term = 0;
    int ans = 0;
    while(new_term < max) {
        if(new_term % 2 == 0) ans += new_term;
        new_term = first + second;
        first = second;
        second = new_term;
    }
    printf("%i\n", ans);
}