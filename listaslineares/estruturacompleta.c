#include <stdio.h>
#define max 6
typedef struct listaSeq{
    int valores[max];
    int n;
}listaSeq;

void inicializar(listaSeq *L){
    L->n = 0;
}

void exibirLista(listaSeq L){
    int i;
    if(L.n>0){
       for(i=0;i<L.n;i++){
        printf("%d ",L.valores[i]);
       } 
    }
    else{
        printf("\nLista vazia!");
    }
    
}

int buscarValor(listaSeq L, int valor){
    int i;
    for(i=0;i<L.n;i++){
        if(L.valores[i] == valor){
            return i;
        }
    }
    return -1;
}

void inserir(listaSeq *L, int valor){
    if(L->n < max){
        if(buscarValor(*L,valor)==-1){
            L->valores[L->n] = valor;
            (L->n)++;
        }
        else{
            printf("\nElemento já está cadastrado!");
        }
        
    }
    else{
        printf("\nLista cheia!!!");
    }
}

void remover(listaSeq *L, int valor){
    if(L->n>0){
        int pos = buscarValor(*L,valor);
        if(pos!=-1){
            L->valores[pos] = L->valores[(L->n)-1];
            (L->n)--;
        }
        else{
            printf("\nValor não está na lista!");
        }
    }
    else{
        printf("\nLista vazia!");
    }
}

int main()
{
    listaSeq lista;
    inicializar(&lista);
    inserir(&lista,5);
    inserir(&lista,2);
    inserir(&lista,4);
    inserir(&lista,8);
    exibirLista(lista);
    return 0;
}
