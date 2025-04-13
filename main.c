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
            printf("a soma é: %d\n", num_1 + num_2);
        }
        else if (operation == '-')
        {
            printf("a subtração é: %d\n", num_1 - num_2);
        }
        else if (operation == '*')
        {
            printf("a multiplicação é : %d\n", num_1 * num_2);
        }
        else if (operation == '/')
        {
            if (num_2 != 0)
            {
                printf("a divisão é: %d\n", num_1 / num_2);
            }
            else
            {
                printf("Inválido\n");
            }
        }
        else
        {
            printf("inválido\n");
        }

        printf("Deseja continuar? (s) (n) \n");
        getchar();
        scanf(" %c", &continuar);
    }

    printf("Programa encerrado. Obrigado por usar!");

    return 0;
}