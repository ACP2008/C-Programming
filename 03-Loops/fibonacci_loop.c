#include <stdio.h>

int main()
{
    int number, first = 0, second = 1, next, i;

    printf("Enter the number of terms: ");
    scanf("%d", &number);

    printf("Fibonacci Series: ");

    for (i = 1; i <= number; i++)
    {
        printf("%d ", first);

        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");

    return 0;
}
