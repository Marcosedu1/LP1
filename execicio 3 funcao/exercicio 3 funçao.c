#include <stdio.h>
#include <locale.h>

void fentradados(float numeros[5])
{
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("\nInsira o %d° valor\n",i+1);
        scanf("%f",&numeros[i]);
    }
    printf("\nRetornando ao menu\n\n");
}

void fmedia(float numeros[5])
{
    float valorTotal;
    int i;

    for (i = 0; i < 5; i++)
    {
        valorTotal = valorTotal + numeros[i];
    }
    float media = valorTotal / 5;
    printf("\n\nA media aritimetica dos valores eh: %.2f \n", media);
    printf("\nRetornando ao menu\n\n");
}

void fmediaponderada(float numeros[5])
{
    float pesos[5];
    int i;
    float pesosTotal;

    for (i = 0; i < 5; i++)
    {
        printf("Insira o %dº peso\n",i+1);
        scanf("%f",&pesos[i]);
        pesosTotal = pesosTotal + pesos[i];
    }
    printf("\n%f\n",pesosTotal);
    float media = ((pesos[1] * numeros[1] )+ (pesos[2] * numeros[2]) + (pesos[3] * numeros[3]) + (pesos[4] * numeros[4]) + (pesos[5] * numeros[5])) / pesosTotal;
    printf("\nA media ponderada dos valores eh: %f  \n", media);
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float numeros[5];
    int opcao;

    do
    {
        printf("Escolha uma das opcoes abaixo\n1- Entrada de dados(5 valores)\n2- Calcular media aritimetica\n3- Calcular media ponderada\n4- Calcular desvio padrao\n5- Achar o maior valor e o menor valor\n6- Sair do programa\n");
        scanf("%d",&opcao);

        switch(opcao)
        {
        case 1:
            fentradados(numeros);
            break;

        case 2:
            fmedia(numeros);
            break;

        case 3:
            fmediaponderada(numeros);
            break;

        default:
            printf("Opcao invalida");
            scanf("%d",&opcao);
            break;
        }
    }
    while(opcao<7);
}
