#include <stdio.h>

// Function Definition
void fibonacci(int number)
{
    int first = 0, second = 1, next, i;

    printf("Fibonacci Series: ");

    for (i = 1; i <= number; i++)
    {
        printf("%d ", first);

        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");
}

int main()
{
    int number;

    printf("Enter the number of terms: ");
    scanf("%d", &number);

    fibonacci(number);

    return 0;
}
