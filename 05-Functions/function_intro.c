#include <stdio.h>

// Function Definition
void greet()
{
    printf("Welcome to C Programming!\n");
    printf("Functions are easy to learn.\n");
}

int main()
{
    printf("Before Function Call\n\n");

    // Function Call
    greet();

    printf("\nAfter Function Call\n");

    return 0;
}
