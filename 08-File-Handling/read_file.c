#include <stdio.h>

int main()
{
    FILE *file;
    char ch;

    // Open file in read mode
    file = fopen("student.txt", "r");

    if (file == NULL)
    {
        printf("File not found!\n");
        return 1;
    }

    printf("File Contents:\n\n");

    // Read file character by character
    while ((ch = fgetc(file)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(file);

    return 0;
}
