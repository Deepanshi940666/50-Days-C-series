// Sort an array of 0s, 1s and 2s (Dutch National Flag Problem)

#include <stdio.h>

int main()
{
    int n, a[100], i;
    int count0 = 0, count1 = 0, count2 = 0;
    printf("Enter no. of elements in the array:");
    scanf("%d", &n);
    printf("Enter %d elements in the array (only 0s, 1s and 2s):\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            count0++;
        }
        if (a[i] == 1)
        {
            count1++;
        }
        if (a[i] == 2)
        {
            count2++;
        }
    }
    for (i = 0; i < count0; i++)
    {
        a[i] = 0;
    }
    for (i = count0; i < count0 + count1; i++)
    {
        a[i] = 1;
    }
    for (i = count0 + count1; i < count0 + count1 + count2; i++)
    {
        a[i] = 2;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}