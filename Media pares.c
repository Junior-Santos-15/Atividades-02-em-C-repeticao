#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");
    
    int numero;
    int par=0, impar=0, mediaPar, soma;
    
    
    do{
    printf("Digite um valor : \n");
    scanf("%d",&numero);
        if (numero!=0){
		
		 if (numero % 2 == 0)
        {
            par++; 
        }
            else
            {
                impar++;
            }
    }
    	
    	soma += numero;
    	mediaPar = soma / par; 
    	
      }while(numero != 0);
      
      system("cls");
      
      printf("Número Par : %d\n", par);
      printf("Número Impar : %d\n", impar);
      printf("Média de Números pares : %d\n",mediaPar);
      
    return 0;
}
