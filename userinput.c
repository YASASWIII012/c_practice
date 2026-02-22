
#include <stdio.h>

int main()
{
    int age;
    float gpa;
    char grade;
    char name[30];

    printf("enter your age:\n");
    scanf("%d", &age);

    printf("enter your gpa:\n");
    scanf("%f", &gpa);

    printf("enter your grade:\n");
    scanf(" %c", &grade);   // space before %c is IMPORTANT

    printf("enter your name:\n");
    scanf("%s", name);      // no & for char array

    printf("%d\n", age);
    printf("%f\n", gpa);
    printf("%c\n", grade);
    printf("%s\n", name);

    return 0;
}