#include <stdio.h>
#include <locale.h>

float fCalcDesconto(float valComp)
{
    float desc;
    if (valComp >= 800)
    {
        desc = 0.15 * valComp;
    }
    else
        desc = 0;
    return desc;
}

float fCalcMedia(float prv1, float prv2)
{
    float media;
    media = (prv1 + prv2)/2;
    return media;
}


void fdobro()
{
    int numero, dobro;

    printf("\nVoce escolheu a opcao dobro, insira um numero\n");
    scanf("\n%d", &numero);
    dobro = numero * 2;
    printf("\n O resultado eh: %d", dobro);
}

void fvenda()
{
    int codigo, qtdeVend;
    float precUnit, valComp, valPagar;

    printf("\nVoce escolheu a opcao Venda");
    printf("\nInforme um codigo\n");
    scanf("\n%d", &codigo, qtdeVend, precUnit);
    printf("\nInforme qtde vendida: \n");
    scanf("\n%d", &qtdeVend);
    printf("\nInforme o preco unitario: \n");
    scanf("\n%f", &precUnit);

    valComp = precUnit * qtdeVend;
    valPagar = valComp - fCalcDesconto(valComp);
    printf("\nValor total: %.2f \nDesconto: %.2f \nTotal a pagar: %.2f",valComp, fCalcDesconto(valComp), valPagar);
}

void fmedia()
{
    int codigo;
    float prv1, prv2;

    printf("Voce escolheu a opcao Media");
    printf("\n Informe um codigo: ");
    scanf("\n%d", &codigo);

    while (codigo > 0)
    {
        printf("\nInforme nota 1: ");
        scanf("\n%f",&prv1);

        printf("\nInforme nota 2: ");
        scanf("\n%f",&prv2);

        printf("\nMedia: %.2f",fCalcMedia(prv1,prv2));
        if(fCalcMedia(prv1, prv2)>=5)
        {
            printf("\nAprovado");
        }
        else
            printf("\nReprovado");

        printf("\n Digite 0 para voltar ");
        scanf("\n%d",&codigo);
    }
}

void ftabuada(int numero, int qtdeElem)
{
    int cont, resultado;
    for (cont=1; cont <= qtdeElem; cont++)
    {
        resultado = numero * cont;

        printf("\n%d x %d = %d",numero, cont, resultado);
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int opcao, numero, qtdeElem;

    printf("Escolha uma opcao de 1 a 4\n");
    scanf("\n%d",&opcao);
    while(opcao < 5)
    {
        if(opcao == 1)
        {
            fdobro();
        }
        else if( opcao == 2)
        {
            fvenda();
        }
        else if(opcao == 3)
        {
            fmedia();
        }
        else if(opcao == 4)
        {
            printf("\nVoce escolheu a opcao Tabuada\n");
            printf("\nInforme um numero a ser multiplicado: ");
            scanf("\n%d",&numero);
            printf("\nInforme a quantidade ser multiplicada ");
            scanf("\n%d",&qtdeElem);
            ftabuada(numero, qtdeElem);
        }
        printf("\n\nInsira uma opcao de 1 a 4\n");
        scanf("\n%d",&opcao);
        }
    }
