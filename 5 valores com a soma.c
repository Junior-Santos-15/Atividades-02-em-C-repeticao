#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int i, num;
    int soma;

    for (i = 0; i < 5; i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &num);

        soma += num;
    }

    printf("Soma dos valores: %d\n", soma);

    system("pause");
    return 0;
}