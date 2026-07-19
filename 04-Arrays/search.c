#include <stdio.h>

int main()
{
    int arr[5];
    int i, search, found = 0;

    printf("Enter 5 elements:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &search);

    for (i = 0; i < 5; i++)
    {
        if (arr[i] == search)
        {
            found = 1;
            printf("%d found at position %d\n", search, i + 1);
            break;
        }
    }

    if (found == 0)
    {
        printf("%d not found in the array.\n", search);
    }

    return 0;
}
