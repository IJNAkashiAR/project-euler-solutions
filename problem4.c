#include <stdio.h>
#include <math.h>

// compiled with gcc problem4.c -lm

int main()
{
    int checking[898];
    // Construct the palindromes to check
    for (int i = 100; i <= 997; i++)
    {
        int num = 0;
        int temp = i;
        while (temp != 0)
        {
            num += temp % 10;
            temp /= 10;
            num *= 10;
        }
        int k = i - 100;
        checking[k] = (i * 1000) + num / 10;
    }

    // Check factors of each palindrome
    for (int i = 897; i >= 0; i--)
    {
        for (int j = 100; j < sqrt(checking[i]); j++)
        {
            if ((checking[i] % j) == 0 && checking[i] / j <= 999)
            {
                // Return result
                printf("%u %u\n", j, checking[i] / j);
                goto exit;
            }
        }
    }
    exit: return 0;
}