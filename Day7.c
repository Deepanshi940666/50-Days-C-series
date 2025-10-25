// Cyclically rotate an array by one(25-10-25)

#include <stdio.h>

int main()
{
    int n, a[n], i, c[10], last = 0;
    printf("Enter no. of elements in the array:");
    scanf("%d", &n);
    printf("Enter %d elements in the array:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    last = a[n - 1];
    c[0] = last;

    for (i = 1; i < n; i++)
    {
        c[i] = a[i - 1];
    }
    for (i = 0; i < n; i++)
    {
        printf(" %d", c[i]);
    }
    return 0;
}
