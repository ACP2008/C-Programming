#include <stdio.h>

// Function Definition
long long factorial(int number)
{
    int i;
    long long fact = 1;

    for (i = 1; i <= number; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int number;
    long long result;

    printf("Enter a positive number: ");
    scanf("%d", &number);

    if (number < 0)
    {
        printf("Factorial of a negative number does not exist.\n");
    }
    else
    {
        result = factorial(number);

        printf("Factorial of %d = %lld\n", number, result);
    }

    return 0;
}
