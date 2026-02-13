

#include <stdio.h>

int main()
{
    float a, b;
    char operation;

    printf("enter number 1\n");
    scanf("%f", &a);

    printf("enter number 2\n");
    scanf("%f", &b);

    printf("enter mathematical operation you want perform (+,-,*,/) ");
    scanf(" %c", &operation);

    switch (operation)
    {
    case '+':
        printf("addition %.2f\n", a + b);
        break;
    case '-':
        printf("substraction %.2f\n", a - b);
        break;
    case '*':
        printf("multiplication %.2f\n", a * b);
        break;
    case '/':
        printf("division %.2f\n", a / b);
        break;
    default:
        printf("invalid choice please choice correct operation\n");
    }

    return 0;
}