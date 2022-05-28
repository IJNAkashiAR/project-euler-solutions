int main()
{
    int largest = 0;
    int largest_i;
    int largest_j;
    for (int i = 100; i <= 999; i++)
    {
        for (int j = i; j <= 999; j++)
        {
            int temp = i * j;
            int nums[7];
            int k = 0;
            while (temp > 0)
            {
                nums[k] = temp % 10;
                temp /= 10;
                k++;
            }
            int l = 0;
            while (l < k)
            {
                if (nums[l] != nums[k])
                {
                    continue;
                }
                l--;
                k++;
            }
            if (temp > largest && l < k)
            {
                largest_i = i;
                largest_j = j;
                largest = temp;
            }
        }
    }
}