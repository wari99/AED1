#include <stdio.h>

typedef struct produto{
    int cod, qtde;
    float pCompra, pVenda;
    char nome[30];
} produto;


//leitura de um unico produto 
int main(){
    
    produto prod;
    printf("Informe o código do produto: ");
    scanf("%d", &prod.cod);
    
    printf("Informe o nome do produto: ");
    fgets(prod.nome, 30, stdin); //comando para pegar a string, com limite dos chars
    scanf("%d", &prod.cod);
    
    printf("Informe o preço de compra do produto: ");
    scanf("%f", &prod.pCompra);
    
    printf("Informe o preço de venda do produto: ");
    scanf("%f", &prod.pVenda);
    
    printf("Informe a quantidade em estoque do produto: ");
    scanf("%d", &prod.qtde);
    
    return 0;
    
}
