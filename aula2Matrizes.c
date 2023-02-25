#include <stdio.h>
#include <conio.h>

int main()
{
    int m[4][4],i,j,menor,maior; // declarando
    
    printf ("\nDigite valor para os elementos da matriz\n\n"); 
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
        	
        	printf("\nElemento[%d][%d] = ", i+1, j +1);// pedindo as variaveis para o usuário
           	scanf("%d",&m[i][j]); // armazenando as variaveis
           
           if (i == 0 && j == 0){
               menor=m[0][0];
               maior=m[0][0];
           }
           
           if(m[i][j]<menor){
            menor=m[i][j];
           }
           
           if(m[i][j]>maior){
            maior=m[i][j];
           }
        }
    }
    
    printf("O menor numero e: [%d]\n",menor); // imprime os resultados
    printf("O maior numero e: [%d]\n",maior);
    return 0;
}
