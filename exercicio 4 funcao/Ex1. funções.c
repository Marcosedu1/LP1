#include <stdio.h>

int main()
{

    int idade, dependentes;
    float valAss, mensalidade, valDep, valTotal;

    printf("Informe sua idade: ");
    scanf("%d",&idade);
    printf("Informe sua quantidade de dependentes: ");
    scanf("%d",&dependentes);

    if(idade >= 16 && idade < 20)
    {// tem que abrir e fechar chaves


        valAss = 200;
        mensalidade = 30 * 12;
        valDep = dependentes * 10 * 12;
        valTotal = valAss + mensalidade + valDep;
        printf("Seu plano e o Plano Jovem\n");
        printf("Sua quantidade dependentes: %d\n", dependentes);// aqui nao tem &dependentes
        printf("Valor total a ser pago: %.2f\n", valTotal);
    }
    else
    if(idade >= 20 && dependentes != 0) // != símbolo de diferente
    {


        valAss = 300;
        mensalidade = 60 * 12;
        valTotal = valAss + mensalidade;
        printf("Seu plano e o Plano Adulto\n");
        printf("Sua quantidade dependentes: %d\n", dependentes);
        printf("Valor total a ser pago: %.2f\n", valTotal);
    }
    else
    if(idade >= 20 && dependentes == 0)
    {


        valAss = 300;
        mensalidade = (60 * 12) - ((60 * 6) * 0.1);
        valTotal = valAss + mensalidade;
        printf("Seu plano e o Plano Adulto\n");
        printf("Sua quantidade dependentes: %d\n", dependentes);
        printf("Valor total a ser pago: %.2f\n", valTotal);
    }
    return 0;
}
