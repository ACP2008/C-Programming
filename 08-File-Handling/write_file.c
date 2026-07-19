#include <stdio.h>

int main()
{
    FILE *file;
    char text[100];

    // Open file in write mode
    file = fopen("student.txt", "w");

    if (file == NULL)
    {
        printf("File cannot be created!\n");
        return 1;
    }

    printf("Enter text: ");
    scanf(" %[^\n]", text);

    fprintf(file, "%s\n", text);

    fclose(file);

    printf("Data written successfully.\n");

    return 0;
}
