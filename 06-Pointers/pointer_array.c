#include <stdio.h>

int main()
{
    int arr[5];
    int *ptr;
    int i;

    printf("Enter 5 elements:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Pointer points to the first element of the array
    ptr = arr;

    printf("\nArray Elements are:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", *(ptr + i));
    }

    printf("\n");

    return 0;
}
