/*1. Faça um programa para ler um conjunto de números reais, armazenando-o em vetor e
calcular o quadrado das componentes deste vetor, armazenando o resultado em outro
vetor. Os conjuntos têm 10 elementos cada. Imprimir todos os conjuntos.*/

#include <stdio.h>

int main()
{
    int numeros[10];
    int quadrado[10];
    int i = 0;
    
    for(i ; i < 10; i++){
        printf("N%d: ", i+1);
        scanf("%d", &numeros[i]);
        quadrado[i] = numeros[i]*numeros[i];
    }  
    
    i = 0;
    
    printf("Vetor e Quadrados: ");    
    for(i ; i < 10; i++){
        printf(" %d ", numeros[i]);
 
        printf(" %d ", quadrado[i]);
    }
    return 0;
}
