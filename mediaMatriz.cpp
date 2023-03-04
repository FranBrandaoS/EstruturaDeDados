
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "Portuguese");
float nota[5][5], media;
int i, j;
media = 0;


//Leitura das 4 notas de 5 alunos
for(i=0; i<5; i++) {
    for(j=0; j<4; j++) {
        printf("\nAluno %d Nota %d \n", i+1, j+1);
        scanf("%f", &nota[i][j]);
    }
    nota[i][j]=0;
}

for(i=0;i<5;i++)
    {
    for(j=0;j< 4;j++) {
        printf("%f %i %i", nota[i][j], i+1, j+1);
    }
    printf("\n");
}



//Somatório das notas dos 5 alunos
for(i=0; i<5; i++) {
    for(j=0; j<4; j++) {
        nota[i][4] = nota[i][4] + nota[i][j];
    }
}



//Calculo da media de cada aluno
for(i=0; i<5; i++) {
    nota[i][4] = nota[i][4]/4;
    //Somatorio geral das medias
    media = nota[i][4] + media;
}



//Calculo da media geral
media = media/5;

for(i=0; i<5; i++) {
    printf("\nA média do aluno %d = %.2f", i+1, nota[i][4]);
    }


printf("\nA média geral dos alunos: %.2f", media);





return 0;
}
