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

printf("Digite uma nota: ");
scanf("%f",&nota);

fflush(stdin); //limpa cache

printf("Deseja inserir mais uma nota? ");
gets(resposta);

//Contador + 1

contador++;

//somaNotas = somaNotas + nota;
somaNotas += nota;


} while (strcmp(resposta, "sim") ==0);

media = somaNotas / contador;

printf("Media: %f\n",media);

    return 0;
}