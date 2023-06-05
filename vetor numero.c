#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i, numero[3];
    int maiorNumero = INT_MIN, menorNumero = INT_MAX;

    for (i = 0; i < 3; i++)
    {

        printf("Digite o %dº valor: ", i + 1);
        scanf("%d", &numero[i]);

        if(numero[i] > maiorNumero)
        {
            maiorNumero = numero[i];
        }
        
        if(numero[i] < menorNumero)
        {
            menorNumero = numero[i];
        }
 
    }

    printf("\n");

    for (i = 0; i < 0; i++)
    {
    printf("%dº valor: %d \n",i + 1 ,numero[i]);
    }
    
    printf("Maior número: %d \n", maiorNumero);
    printf("Menor número: %d \n", menorNumero);

    return 0;
}