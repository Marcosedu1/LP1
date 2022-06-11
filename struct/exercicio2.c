#include <stdio.h>
#include <string.h>

typedef struct vProd{
    int num;
    char descr[25];
    double valor;
    int qtdes[12];} TProd;

int main(){
    TProd vProd;

    printf("Digite o numero do produto: ");
    scanf("%d",&vProd.num);
    printf("Digite a descricao do produto: ");
    scanf("%s",vProd.descr);
    printf("Digite o valor do produto: ");
    scanf("%ld",&vProd.valor);

    for(int i=0;i < sizeof vProd.qtdes / sizeof vProd.qtdes[0];i++){
        printf("Digite a quantidade %d: ",i+1);
        scanf("%d",&vProd.qtdes[i]);
    }

    strcpy(vProd.descr,strupr(vProd.descr));
    printf("Descricao em maiusculo: %s",&vProd.descr);

    int somaQtde=vProd.qtdes[0], maiorQtde=vProd.qtdes[0], menorQtde=vProd.qtdes[0];

    for(int i=1;i < sizeof vProd.qtdes / sizeof vProd.qtdes[0];i++){
        somaQtde += vProd.qtdes[i];

        if(maiorQtde < vProd.qtdes[i]){
            maiorQtde = vProd.qtdes[i];
        }

        if(menorQtde > vProd.qtdes[i]){
            menorQtde = vProd.qtdes[i];
        }
    }
    printf("\nSoma das quantidades: %d\nMaior Quantidade: %d\nMenor Quantidade: %d",somaQtde,maiorQtde,menorQtde);
}
