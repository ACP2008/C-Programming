#include <stdio.h>

int main()
{
    int num1, num2, sum;
    int *ptr1, *ptr2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Assign Address to Pointers
    ptr1 = &num1;
    ptr2 = &num2;

    // Addition using Pointers
    sum = *ptr1 + *ptr2;

    printf("Addition = %d\n", sum);

    return 0;
}
