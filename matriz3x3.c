#include <stdio.h>

int main()
{
    int i;
    int j;
    int matriz[3][3]; 
    
    for(i= 0; i < 3; i++){
        for(j= 0; j < 3; j++){
            printf("Elemento [%d][%d] = ", i,j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for(i= 0; i < 3; i++){
        for(j= 0; j < 3; j++){
            printf("%d ", matriz[i][j]);
        }
    }    
    return 0;
}
