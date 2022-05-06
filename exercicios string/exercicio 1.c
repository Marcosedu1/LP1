#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <windows.h>

int main(){

    char palavra[100];
    int vogais = 0;
    int i;

    printf("Digite uma palavra: ");
    gets(palavra);

    for(i = 0 ; i < 99 ; i++){
        if(strcmp(palavra[i],"a") || strcmp(palavra[i],"e") || strcmp(palavra[i],"i") || strcmp(palavra[i],"o") || strcmp(palavra[i],"u")){
            vogais = vogais+1;
        }
    }
    printf("Quantidade de vogais:");
    return(0);
}