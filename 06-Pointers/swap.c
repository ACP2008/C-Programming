#include <stdio.h>

// Function to swap two numbers using pointers
void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("\nBefore Swapping:\n");
    printf("First Number = %d\n", num1);
    printf("Second Number = %d\n", num2);

    swap(&num1, &num2);

    printf("\nAfter Swapping:\n");
    printf("First Number = %d\n", num1);
    printf("Second Number = %d\n", num2);

    return 0;
}
