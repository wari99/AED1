#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ponteiro;
    int i, qtdElementos;
    
    printf("\nQuantidade de Elementos: ");
    scanf("%d", &qtdElementos);
    
    ponteiro = (int *) malloc(qtdElementos * sizeof(int));
    for(i = 0; i < qtdElementos; i++){
        printf("\nV[%d]: ", i);
        scanf("%d", &ponteiro[i]);
    }
    
    printf("\n\nVETOR: \n\n");
    for(i = 0; i < qtdElementos; i++){
        printf("\nV[%d] = %d", i, ponteiro[i]);
    }
  
    return 0;
}
