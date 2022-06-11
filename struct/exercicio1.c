#include <stdio.h>

typedef struct regDados{
    int codigo;
    float preco;
    long long int id;
    int qtde;}regDados;

int main(){
    regDados vDados;

    printf("Digite o Codigo: ");
    scanf("%d",&vDados.codigo);
    printf("\nDigite o Preco: ");
    scanf("%f",&vDados.preco);
    printf("\nDigite a Id: ");
    scanf("%d",&vDados.id);
    printf("\nDigite a Quantidade: ");
    scanf("%d",&vDados.qtde);

    printf("\nCodigo: %d\nPreco: %f\nId: %d\nQuantidade: %d", vDados.codigo, vDados.preco, vDados.id, vDados.qtde);
}
