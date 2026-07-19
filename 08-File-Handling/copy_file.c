#include <stdio.h>

int main()
{
    FILE *source, *destination;
    char ch;

    // Open source file in read mode
    source = fopen("source.txt", "r");

    if (source == NULL)
    {
        printf("Source file not found!\n");
        return 1;
    }

    // Open destination file in write mode
    destination = fopen("destination.txt", "w");

    if (destination == NULL)
    {
        printf("Destination file cannot be created!\n");
        fclose(source);
        return 1;
    }

    // Copy file character by character
    while ((ch = fgetc(source)) != EOF)
    {
        fputc(ch, destination);
    }

    // Close both files
    fclose(source);
    fclose(destination);

    printf("File copied successfully.\n");

    return 0;
}
