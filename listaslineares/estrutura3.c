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

int buscarValor(listaSeq L, int valor){ //parametros : valor que vai ser buscado, e a lista
    int i;
    for(i = 0; i < L.n; i++){
        if(L.valores[i] == valor){
            return i;
        }
    }
    return -1; //se for uma posicao invalida
}

void inserir(listaSeq *L, int valor){ //inserir elemento na lista
    if(L->n < max){ //usando a seta pois a lista foi passada por referencia
        if(buscarValor(L,valor) == -1){
            L->valores[L->n] = valor;
            (L->n)++;
        }
        else{
            printf("\nElemento ja cadastrado!");
        }
    }
    else{
        printf("\nLista cheia!");
    }
}

int main(){
    listaSeq lista; 
    
    inicializar(&lista); //passagem por referencia, precisa passar o endereco da lista
    inserir(&lista, 5);
    inserir(&lista, 2);
    inserir(&lista, 4);
    inserir(&lista, 8);
    
    exibirLista(lista);
    
    return 0;
}
