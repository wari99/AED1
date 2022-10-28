
// Minha Tentativa. 
/*Faça programa que leia duas notas e calcule e exiba a média dessas duas
notas para cada aluno de uma turma de 15 estudantes.
Você deve fazer a leitura das notas utilizando um procedimento chamado
“leitura” e a média deve ser calculada por uma função “calcular_media”, que
recebe as duas notas por parâmetro e retorna o resultado da média.
O procedimento de leitura e a função da média devem ser chamados na função
main, que exibirá as notas e média de cada aluno.
Não utilize variáveis globais!*/

#include <stdio.h>

void leitura (float n1,float n2){
    printf("\nNota 1:");
    scanf("%f", &n1);
    
    printf("Nota 2:");
    scanf("%f", &n2);
}

float calcular_media(float n1, float n2){
    float media;
    leitura(n1, n2);
    media = (n1+n2)/2;
    
    printf("%f", media);
    
    return media;
}

int main()
{
    float n1 = 0;
    float n2 = 0;
    
    for(int i = 0; i < 3; i++){
//        leitura(n1, n2);
        calcular_media(n1, n2);
    }
    
    return 0;
}
