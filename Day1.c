// Find the maximum and minimum element in an array(09 oct 2025)

#include <stdio.h>
int main()
{
    int a[5] = {11, 57, 4, 91, 2};
    int i = 0, max = a[0],min=a[0];
    // int i;
    while (i < 5)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        i++;
       
    }
 printf("%d is max no. of this array", max);
 while (i < 5)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
        i++;
       
    }

return 0;
}