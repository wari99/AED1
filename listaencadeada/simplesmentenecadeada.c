#include <stdio.h>
#include <stdlib.h>

typedef struct no{
   int info;
   struct no *prox;
}no;

void constroiLista(no **n){
    *n = NULL;
}

int listaVazia(no *n){
    return n == NULL;
}

int insereInicio(no **n, int valor){
    no *aux;
    aux = (no *) malloc(sizeof(no));
    
    if(!listaVazia(aux)){
        aux->info = valor;
        aux->prox = *n;
        *n = aux;
    }
    else{
        printf("Lista Vazia!");
    }
}

void mostraLista(no *n){
    no *aux;
    aux = n;
    while(!listaVazia(aux)){
        printf(" %d ", aux->info);
        aux = aux->prox;
    }
}

void insereFinal(no **n, int valor){
    no *aux, *p;
    aux = (no *) malloc(sizeof(aux));
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

no* buscaElemento(no *n, int valor){
    no *aux;
    aux = n;
    
    while(aux != NULL){
        if(valor == aux->info){
            return aux;
        }
        aux = aux->prox;
    }
}

void removerElemento(no **n, int valor){
    no *anterior, *aux;
    aux = *n;
    anterior = NULL;
    if(!listaVazia(*n)){ 
        while(aux != NULL && aux->info != valor){
            anterior = aux;
            aux = aux->prox;
        }
        if(aux == NULL){ 
            printf("O elemento nao foi encontrado");
        }
        else{ //Se o elemento for encontrado
            if(anterior == NULL){ // É o primeiro elemento
                *n = aux->prox;
            }
            else{ //Nao é o primeiro elemento
                anterior->prox = aux->prox;
            }
            printf("\nFoi removido: %d\n", aux->info);
            free(aux);
        }
    }
    else{
        printf("Lista Vazia!");
    }
}

int main(){
    no *inicioL;
    constroiLista(&inicioL);

    insereInicio(&inicioL, 8);
    insereInicio(&inicioL, 3);
    insereInicio(&inicioL, 7);
    insereInicio(&inicioL, 10);
    insereFinal(&inicioL, 99);
    insereInicio(&inicioL, 1);
    insereFinal(&inicioL, 100);
    mostraLista(inicioL);
    
    removerElemento(&inicioL, 3);
    mostraLista(inicioL);
    return 0;
}
