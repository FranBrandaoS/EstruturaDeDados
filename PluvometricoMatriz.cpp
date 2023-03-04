

#include <stdio.h>

int main()
{
    int matriz[7][6],i,j;
    float media[7], mediaMes[6];
   
    for(i=0;i<7;i++){
        
       for(j=0;j<6;j++){
           
           printf("digite o indice pluvometrico do mes  %d da cidade  %d: ",j+1,i+1);
           scanf("%d",&matriz[i][j]);
           
           media[i] += matriz[i][j];

           mediaMes[j] += matriz[i][j];
       	}
       	
       	media[i] = (media[i]/6);
       	
    }
    
    for(i=0;i<7;i++){
    	
    	printf("a media da cidade %i foi %.2f\n",i+1,media[i]);
    	
	}
    
	
   
        for(i = 0; i < 6; i++) {
            printf("a media do mes  %i foi %.2f\n", i + 1, mediaMes[i] / 7);
        }
    
}
