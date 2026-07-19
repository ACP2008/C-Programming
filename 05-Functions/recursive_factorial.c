#include <stdio.h>

// Function Definition
int factorial(int number)
{
    if (number == 0 || number == 1)
    {
        return 1;
    }

    return number * factorial(number - 1);
}

int main()
{
    int number;

    printf("Enter a positive number: ");
    scanf("%d", &number);

    if (number < 0)
    {
        printf("Factorial of a negative number does not exist.\n");
    }
    else
    {
        printf("Factorial of %d = %d\n", number, factorial(number));
    }

    return 0;
}
