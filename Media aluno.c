#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char resposta[4];
    float nota;
    int contador, somaNotas;
    float media;

    do
    {
        do
        {
            printf("Digite uma nota: ");
            scanf("%f", &nota);
        } while (nota < 0 || nota > 10);

        fflush(stdin); // limpa cache

        printf("Deseja inserir mais uma nota? ");
        gets(resposta);

        // Contador + 1

        contador++;

        // somaNotas = somaNotas + nota;
        somaNotas += nota;

    } while (strcmp(resposta, "sim") == 0);

    media = somaNotas / contador;


    if (media >= 7){
    printf("Aprovado! \n");
}else if(media >= 5){
    printf("Recuperação! \n");
}else{
    printf("Reprovado! \n");
}


    printf("Media: %f\n", media);

    return 0;
}