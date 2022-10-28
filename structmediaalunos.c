//Minha tentativa

/*Em uma escola é necessário armazenar os dados de diversos alunos. Suponha uma turma
com 20 alunos e que os dados de cadastro desejados são: nome, matrícula, quatro notas e
a média final. Faça um programa para armazenar esses dados e imprimir a média de cada
aluno.*/

#include <stdio.h>

typedef struct aluno{
    char nome[50];
    int matricula;
    float nota1, nota2, nota3, nota4;
    float mediafinal;
    
}aluno;

int main()
{
    int i = 0;
    aluno aluno[3]; //aluno TIPO DE VARIAVEL    aluno NOME DA VARIAVEL      [3] QTD
    
    for (i; i<3; i++){
//        printf("\nInsira o nome do aluno %d: ", i);
//        fgets(aluno[i].nome, 50, stdin);
        
        printf("\nInsira a matricula do aluno %d: ", i);
        scanf("%d", &aluno[i].matricula);
        
        printf("\nNota 1 do aluno %d:", i);
        scanf("%f", &aluno[i].nota1);

        printf("\nNota 2 do aluno %d:", i);
        scanf("%f", &aluno[i].nota2);

        printf("\nNota 3 do aluno %d:", i);
        scanf("%f", &aluno[i].nota3);
        
        printf("\nNota 4 do aluno %d:", i);
        scanf("%f", &aluno[i].nota4);
        
        aluno[i].mediafinal = (aluno[i].nota1+aluno[i].nota2+aluno[i].nota3+aluno[i].nota4)/4;
        
        printf("A media final do aluno %d foi: %.2f", i, aluno[i].mediafinal);
    }

    return 0;
}
