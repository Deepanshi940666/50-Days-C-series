//Move all negative numbers to beginning and positive to end(13-10-2025)
#include <stdio.h>

int main()
{
    int n, a[100], i;
    printf("Enter no. of elements in the array:");
    scanf("%d", &n);
    printf("Enter %d elements in the array:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
     for (i = 0; i < n; i++)
    {
    printf("%d ", a[i]);
    }
    return 0;
}