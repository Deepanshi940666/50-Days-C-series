// Find Union and Intersection of two arrays  (14-10-25)

#include <stdio.h>

int main()
{
    int a[50], b[50], i,j, count,n1,n2,n3=n1+n2,k=0;
    printf("Enter no. of elements in the first array:");
    scanf("%d", &n1);
    printf("Enter %d elements in the first array:\n",n1);
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter no. of elements in the second array:");
    scanf("%d", &n2);
    printf("Enter %d elements in the second array:\n",n2);
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }
    int c[100];
     for (i = 0; i < n1; i++)
    {
        c[i] = a[i];
    }
    for (i = 0; i < n2; i++)
    {
        c[n1+ i] = b[i];
    }
    for (i = 0; i < n3; i++)
    {
        printf("%d", c[i]);

    }
     for(i = 0; i < n3; i++) {
        for(j = i + 1; j < n3; j++) {
            if(c[i] == c[j]) {
                // Shift elements to the left
                for(k = j; k < n3 - 1; k++) {
                    c[k] = c[k + 1];
                }
                n3--;   // reduce array size
                j--;   // check again for the new element at position j
            }
        }
        
    }

    printf("\nArray after removing duplicates:\n");
    for(i = 0; i < n3; i++) {
        printf("%d ", c[i]);
    }

    return 0;

}


















    // for (i = 0; i <= n3 - 1; i++)   //for(int i=0;i<ln;i++){
    // {
    //     count = 0;
    //     for (j = i + 1; j < n3; j++) // for(int j=0;j<i;j++){
    //     {
    //         if (c[i] == c[j])
    //         {
    //             count++;
    //             break;
    //         }
    //     }
    //     if (count == 0)
    //     {

    //         printf("%d", c[i]);
    //     }
    // }


    

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str[] = "Hello";
//     int count, i, j;
//     int ln = strlen(str);
    // for (i = 0; i <= ln - 1; i++)   //for(int i=0;i<ln;i++){
    // {
    //     count = 0;
    //     for (j = i + 1; j < ln; j++) // for(int j=0;j<i;j++){
    //     {
    //         if (str[i] == str[j])
    //         {
    //             count++;
    //             break;
    //         }
    //     }
    //     if (count == 0)
    //     {

    //         printf("%c", str[i]);
    //     }
    // }
// }









    // int ln3 = sizeof(c) / sizeof(int);
    // for (i = 0; i <= ln3 - 1; i++) // for(int i=0;i<ln;i++){
    // {
    //     count = 0;
    //     for (int j = i + 1; j < ln3; j++) // for(int j=0;j<i;j++){
    //     {
    //         if (c[i] == c[j])
    //         {
    //             count++;
    //             break;
    //         }
    //     }
    //     if (count == 0)
    //     {

    //         printf("%d\n", c[i]);
    //     }
    //     if(count!=0){
    //          printf("%d\n", intersection[i]);
    //     }
    // }
