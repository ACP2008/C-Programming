#include <stdio.h>

int main()
{
    int arr[5];
    int i, sum = 0;
    float average;

    printf("Enter 5 elements:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }

    average = (float)sum / 5;

    printf("Average = %.2f\n", average);

    return 0;
}
