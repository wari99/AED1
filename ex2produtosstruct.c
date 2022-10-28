#include <stdio.h>
#define max 3
// erro com ponteiro ( ?) 
typedef struct data{
    int d; //dia
    int m; //mes
    int ano; //ano
}data;

typedef struct produto{
    int cod, qtde;
    float pCompra, pVenda;
    char nome[30];
    data dtVal; //struct dentro da struct, exemplificando a data de validade
} produto;

int main(){
    
    produto prod[max];
    int cont;
        for(cont = 0; cont <max; cont++){ //comeca do 0 pois é um vetor
        printf("Informe o código do produto: ");
        scanf("%d", &prod[cont].cod);
        
        printf("Informe o nome do produto: ");
        fflush(stdin);  //limpar o buffer pq a string esta armazenando o enter do input anterior
        fgets(prod[cont].nome, 30, stdin); //comando para pegar a string, com limite dos chars

        //[] para cada indice do vetor 
        
        printf("Informe o preço de compra do produto: ");
        scanf("%f", &prod[cont].pCompra);
        
        printf("Informe o preço de venda do produto: ");
        scanf("%f", &prod[cont].pVenda);
        
        printf("Informe a quantidade em estoque do produto: ");
        scanf("%d", &prod[cont].qtde);
        
        scanf("%d", &prod[cont].dtVal.d); //data de validade com dia mes e ano
    }
    return 0;
    
}
