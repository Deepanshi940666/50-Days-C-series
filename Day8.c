//Maximum Subarray Sum by bruteforce method (26-10-25)
#include <stdio.h>
#include <limits.h>

int main()
{
    int st, end, maxSum = INT_MIN, i;
    int n, a[n];
    printf("Enter no. of elements in the array:");
    scanf("%d", &n);
    printf("Enter %d elements in the array:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (st = 0; st < n; st++)
    {
        int currSum = 0;
        for (end = st; end < n; end++)
        {
            currSum += a[end];

            if (maxSum < currSum)
            {
                maxSum = currSum;
            }
        }
    }
    printf("%d", maxSum);

    return 0;
}