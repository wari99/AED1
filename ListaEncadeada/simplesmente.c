#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int info;
    struct no *prox;
}no;

no* buscaElemento(no *n,int valor){
    no* aux;
    aux = n;
    while(aux != NULL){
        if(valor == aux->info){
            return aux;
        }
        aux = aux->prox;
    }
}

void inicializarLista(no **n){
    *n = NULL;
}

int listaVazia(no *n){
    return n == NULL;
}

void inserirInicio(no **n,int valor){
    no *aux;
    aux = (no*) malloc(sizeof(no));
    if(!listaVazia(aux)){
        aux->info = valor;
        aux->prox = *n;
        *n = aux;
    }
    else{
        printf("Nao foi possivel inserir");
    }
    
}

void pecorrer(no *n){
    no* aux;
    aux = n;
    printf("\n");
    while(!listaVazia(aux)){
        printf(" %d ",aux->info);
        aux= aux->prox;
    }
    printf("\n");
}

void inserirFinal( no** n,int valor){
    no* aux, *p;
    aux = (no*) malloc(sizeof(no));
    if(aux != NULL){
        aux->info = valor;
        aux->prox = NULL;
        if(!listaVazia(*n)){
            p = *n;
            while(p->prox != NULL){
                p = p->prox;
            }
            p->prox = aux;
        }
        else{
            *n = aux;
        }
    }
}

void removerElemento(no** n, int valor){
    no *ant, *aux;
    aux = *n;
    ant = NULL;
    if(!listaVazia(*n)){//procurar pelo nó a remover
        while(aux != NULL && aux->info != valor){
            ant = aux;
            aux = aux->prox;
        }
        if(aux == NULL) {
            printf("\nO elemento não foi encontrado!!!\n");
        }
        else{//encontrei o elemento
            if(ant == NULL){//É o primeiro elemento
                *n = aux->prox;
            }
            else{//Não é o primeiro elemento
                ant->prox = aux->prox;
            }
            
            printf("\nRemovido: %d\n",aux->info);
            free(aux);
        }
    }
    else{
        printf("\nLista vazia!!!!");
    }
}

int main(){
    no *inicioL;
    inicializarLista(&inicioL);
    
    return 0;
}
