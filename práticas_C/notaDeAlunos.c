#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    float nota1, nota2, nota3, media;
    
    printf("\nPor favor, digite a nota 1: ");
    scanf("%f", &nota1);
    
    printf("\nPor favor, digite a nota 2: ");
    scanf("%f", &nota2);
    
    printf("\nPor favor, digite a nota 3: ");
    scanf("%f", &nota3);
    
    media = (nota1+nota2+nota3)/3;
    printf("\nA média do aluno foi: %.1f", media);
    
    if(media > 7){
        printf("\nParabéns! Você está aprovado!");
    }else{
        printf("\nAluno reprovado!");
    }
}

