#include<stdio.h>

int main()
{
    int a, b, choice;

    printf("Enter the operation you want to perform\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");

    printf("Choice: ");
    scanf("%d", &choice);

    printf("Enter firt  numbers a: ");
    scanf("%d", &a);
    printf("Enter  second numbers b: ");
    scanf("%d", &b);


    switch(choice)
    {
        case 1:
            printf("Addition  of two no is: %d", a + b);
            break;

        case 2:
            printf("Subtraction of two no is: %d", a - b);
            break;

        case 3:
            printf("Multiplication of two no is: %d", a * b);
            break;

        case 4:
            if(b != 0)
                printf("Division of two no is: %.2f", (float)a / b);
            else
                printf("Division by zero is not allowed");
            break;

        default:
            printf("Wrong choice");
    }

    return 0;
}