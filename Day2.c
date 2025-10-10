#include <stdio.h>
#include <string.h>
int main()
{
    int n, a[100],i;
    printf("Enter no. of elements in the array:");
    scanf("%d", &n);
    printf("Enter %d elements in the array:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Reverse of array will be:\n");
    for (i=n-1;i>=0;i--)
    {
        printf("\n%d",a[i]);
    }

    return 0;
}