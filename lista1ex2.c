/*Faça um programa que preencha um vetor de 10 posições com números inteiros, exiba
todo o vetor informado e o maior valor encontrado nesse vetor.*/

#include <stdio.h>

int main()
{
    int v[10];
    int maior = 0;
    
    for(int i = 0; i < 10; i++){
        printf("v[%d]: ", i);
        scanf("%d", &v[i]);
        if(v[i] > maior){
            maior = v[i];
        }
    }
    
    printf("Vetor: ");
    for(int j = 0; j < 10; j++){
        printf(" %d ", v[j]);
    }
    
    printf("\nMaior valor no vetor: %d", maior);
    return 0;
}
