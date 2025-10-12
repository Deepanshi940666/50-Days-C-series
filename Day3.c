// Find the 'Kth' max and min element of an array (11-10-2025)

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

    // Bubble Sort
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
    printf("Max is %d\n", a[n - 1]);
    printf("Min is %d", a[0]);
    return 0;
}