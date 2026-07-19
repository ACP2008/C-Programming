#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0)
    {
        printf("%d is a Positive Number.\n", number);
    }
    else if (number < 0)
    {
        printf("%d is a Negative Number.\n", number);
    }
    else
    {
        printf("The number is Zero.\n");
    }

    return 0;
}
