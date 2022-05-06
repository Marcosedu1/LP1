#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <windows.h>

void main(){

    //Boleto: 3419012345123456789012345678901112340000012345 - 46caracteres

    char boleto[47];
    char bancoStr[4];
    char valorStr[11];

    int digBanco;
    float valor;
    float desconto;
    float valorVencido;

    int i = 0, x = 0;


    printf("Digite o codigo do boleto: ");
    gets(boleto);

    while(1){

        if(strcmp(boleto,"FIM")==0 || strcmp(boleto,"fim")==0){
            break;
        }

        for(i = 0 ; i < 3 ; i++){
            bancoStr[i] = boleto[i];
        }

        digBanco = atoi(bancoStr);

        if(digBanco == 001){
            printf("\nBanco do Brasil\n");
        }
        if(digBanco == 033){
            printf("\nSantander\n");
        }
        if(digBanco == 104){
            printf("\nCaixa Economica Federal\n");
        }
        if(digBanco == 341){
            printf("\nItau\n");
        }
        if(digBanco == 745){
            printf("\nCitibank\n");
        }


        for(i = 36 ; i < 46 ; i++){
            valorStr[x] = boleto[i];
            x++;
        }
        valor = atoi(valorStr);
        valor = (float)valor / 100;
        desconto = valor * 0.1;
        valorVencido = valor + desconto;

        printf("\nvalor original: %.2f",valor);
        printf("\ndesconto de multa: %.2f",desconto);
        printf("\nvalor com desconto: %.2f",valorVencido);

        printf("\n\nDigite o codigo do boleto: ");
        gets(boleto);
    }

    return(0);
}
