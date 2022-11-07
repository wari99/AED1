#include <stdio.h>

/*
Complexidade para percorrer a matriz: n²
Sempre vai ser percorrida toda a matriz. 
*/
int main()
{
    int i;
    int j;
    int maior;
    int matriz[3][3]; 
    
    for(i= 0; i < 3; i++){
        for(j= 0; j < 3; j++){
            printf("Elemento[%d][%d] = ", i,j);
            scanf("%d", &matriz[i][j]);
        }
    } 
    
    maior = matriz[i][j];

    for(i= 0; i < 3; i++){
        for(j= 0; j < 3; j++){
            if(matriz[i][j] > maior){
                maior = matriz[i][j];
            }
        }
    }  
    
    printf("O maior valor da matriz e %d", maior);
    
    return 0;
}
