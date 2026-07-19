#include <stdio.h>

int main()
{
    int number = 10;
    int *ptr;

    // Store the address of number in pointer
    ptr = &number;

    printf("Value of number = %d\n", number);
    printf("Address of number = %p\n", &number);

    printf("Value stored in pointer = %p\n", ptr);
    printf("Value using pointer = %d\n", *ptr);

    return 0;
}
