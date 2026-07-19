#include <stdio.h>

// Function Definition
void addition(int num1, int num2)
{
    int sum;

    sum = num1 + num2;

    printf("Addition = %d\n", sum);
}

int main()
{
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // Function Call
    addition(a, b);

    return 0;
}
