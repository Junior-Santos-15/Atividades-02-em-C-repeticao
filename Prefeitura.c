#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    float salario;
    int somaSalario, totalFamilia;
    int mediaSalario, somaFilho, filho, mediaFilho;
    
    do{
    	printf("Digite o seu salário : \n");
    	scanf("%f",&salario);
        
        if(salario >= 0){
	        printf("Digite a quantidade de filhos : \n");
	        scanf("%d",&filho);
	        fflush(stdin);
	        
	        totalFamilia++;
	        
		    somaSalario += salario;
			somaFilho += filho;
		    
			mediaFilho += somaFilho / totalFamilia;
			mediaSalario = somaSalario / totalFamilia;
		}
        
       
	}while(salario > 0);
	
	system("cls");
	
    printf("Total de famílias que responderam : %d\n",totalFamilia);
    printf("Média do Salário : %d\n",mediaSalario); 
    printf("Média do Número de filhos : %d\n",mediaFilho);  
   
    return 0;
}
