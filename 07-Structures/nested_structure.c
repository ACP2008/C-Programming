#include <stdio.h>

struct Address
{
    char city[30];
    char state[30];
};

struct Student
{
    int id;
    char name[30];
    struct Address address;
};

int main()
{
    struct Student student;

    printf("Enter Student ID: ");
    scanf("%d", &student.id);

    printf("Enter Student Name: ");
    scanf("%s", student.name);

    printf("Enter City: ");
    scanf("%s", student.address.city);

    printf("Enter State: ");
    scanf("%s", student.address.state);

    printf("\n----- Student Details -----\n");
    printf("Student ID   : %d\n", student.id);
    printf("Student Name : %s\n", student.name);
    printf("City         : %s\n", student.address.city);
    printf("State        : %s\n", student.address.state);

    return 0;
}
