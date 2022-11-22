#include <stdio.h>

int main()
{
    int vetor[5] = {5,1,4,2,3};
    int aux = 0;
    
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 4; j++){
            if(vetor[i] < vetor[j]){
                aux = vetor[j];
                vetor[j] = vetor[i];
                vetor[i] = aux;
            }
        }
    }

    int k = 0;
    for(k; k < 5; k++){
        printf("%d ", vetor[k]);    
    }
    
    return 0;
}
