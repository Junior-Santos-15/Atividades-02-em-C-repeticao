#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"portuguese");

    int i, par = 0, impar = 0;
    int num;

    // Laço de repetição para -> if

    for (i = 0; i < 5; i++)
    {
        printf("Digite o valor:");
        scanf("%d", &num);

        if (num % 2 == 0)
        {
            par++;
        }
            else
            {
                impar++;
            }
    }

    system("cls");

    // Resolução de resposta

    printf("Número par : %d\n", par);
    printf("Número impar : %d\n", impar);

    system("pause");

    return 0;
}
