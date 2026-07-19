#include <stdio.h>

// Function Definition
int isPrime(int number)
{
    int i;

    if (number <= 1)
    {
        return 0;
    }

    for (i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPrime(number))
    {
        printf("%d is a Prime Number.\n", number);
    }
    else
    {
        printf("%d is not a Prime Number.\n", number);
    }

    return 0;
}
