#include <stdio.h>

int main()
{
    int vetNum[6];
    char vetChar[6];
    int i, j, x;

    printf("Digite 6 numeros positivos: \n");
    for(i=0; i<6; i++)
    {
        scanf("%d",&vetNum[i]);
        while(vetNum[i] <= 0)
        {
            printf("Digite um numero positivo\n");
            scanf("%d",&vetNum[i]);
        }
    }
    printf("\n\nDigite 6 caracteres\n");
    for(j=0; j<6; j++)
    {
        scanf(" %c",&vetChar[j]);
    }

    printf("\n");

    for(x=0; x<6; x++)
    {
        int n;
        for(n=0; n<vetNum[x]; n++)
        {
            printf("%c",vetChar[x]);
        }
        printf("\n");
    }
}
