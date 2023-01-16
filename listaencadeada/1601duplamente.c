#include <stdlib.h>
#include <stdio.h>
typedef struct no{
    int info;
    struct no *ant;
    struct no *prox;
}no;

no *inicioE;
no *inicioD;

void inicializarLista(){
    inicioD = NULL;
    inicioE = NULL;
}

int listaVazia(){
    if(inicioE == NULL){
        return 1;
    }
    return 0;
}

void inserirDir(int valor){
    no *aux;
    aux = (no*) malloc(sizeof(no));
    if(aux != NULL){
        aux->info = valor;
        aux->ant = NULL;
        aux->prox = NULL;
        if(listaVazia()){ //primeiro elemento
            inicioE = aux;
            inicioD = aux;
        }
        else{//inserir pela direita
            aux->ant = inicioD;
            inicioD->prox = aux;
            inicioD = aux;
        }
    }
    else{
        printf("\nErro!");
    }
}

void percorrer(){
    no* aux;    
    aux = inicioE;
    while(aux != NULL){
        printf(" %d", aux->info);
        aux = aux->prox;
    }
}

void percorrerDir(){
    no* aux;
    aux = inicioD;
    while(aux != NULL){
        printf(" %d", aux->info);
        aux = aux->ant;
    }
    
}

int main(){
    inserirDir(8);
    inserirDir(1);
    inserirDir(4);
    inserirDir(7);
    inserirDir(6);
    
    percorrer();
    printf("\n ** \n");
    percorrerDir();
    return 0;
}
