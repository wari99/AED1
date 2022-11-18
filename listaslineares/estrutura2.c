/* max representa a quantidade maxima de elementos que a lista pode armazenar
n representa o numero de elementos na lista.*/

#include <stdio.h>
#define max 6

typedef struct listaSeq{
    int valores[max];
    int n;
}listaSeq;

void inicializar(listaSeq *L){ //procedimento
    L -> n = 0; //valor que precisa inicializar  
}

void exibirLista(listaSeq L){ //procedimento para exibir a lista
    int i;
    if(L.n > 0){ //caso a lista esteja vazia exibir uma mensagem
        for (i = 0; i < L.n; i++){ //percorrendo a lista
            printf("%d ", L.valores[i]);
        }
    }
    else{
        printf("\n Lista vazia!");
    }
}

int buscarValor(int valor, listaSeq L){ //parametros : valor que vai ser buscado, e a lista
    int i;
    for(i = 0; i < L.n; i++){
        if(L.valores[i] == valor){
            return i;
        }
    }
    return -1; //se for uma posicao invalida
}

int main(){
    listaSeq lista; 
    
    return 0;
}
