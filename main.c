#include <stdio.h>
#include <stdlib.h>

int main() 
{
    system("chcp 65001 > nul");

    int num_1;
    int num_2;
    char operation;
    char continuar;

    continuar = 's';

    while (continuar == 's')
    {
        printf("Enter the first number:\n");
        scanf(" %d", &num_1);

        printf("Enter the second number:\n");
        scanf(" %d", &num_2);

        printf("Select the operation: (+, -, *, /)\n");
        scanf(" %c", &operation);

        if (operation == '+')
        {
            printf("The sum is: %d\n", num_1 + num_2);
        }
        else if (operation == '-')
        {
            printf("The subtraction is: %d\n", num_1 - num_2);
        }
        else if (operation == '*')
        {
            printf("The multiplication is: %d\n", num_1 * num_2);
        }
        else if (operation == '/')
        {
            if (num_2 != 0)
            {
                printf("The division is: %d\n", num_1 / num_2);
            }
            else
            {
                printf("Invalid\n");
            }
        }
        else
        {
            printf("Invalid\n");
        }

        printf("Do you want to continue? (s) (n)\n");
        getchar();
        scanf(" %c", &continuar);
    }

    printf("Program ended. Thank you for using!");

    return 0;
}
