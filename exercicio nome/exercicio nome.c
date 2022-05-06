#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <windows.h>

void fArranjaNome(char *nomeCompleto){
    char sobrenome[25];
    char primeiroNome[25];
    int x, y = 0;

    for(x = 0 ; x < 80 ; x++){
        primeiroNome[y] = nomeCompleto[x];
        if(nomeCompleto[x] == ' '){
            break;
        }
        y++;
    }
    printf("\n primeiro nome: %s",primeiroNome);

    for(x = strlen(nomeCompleto) -1 ; x > 0 ; x--){
        if(nomeCompleto[x] == ' '){
            for(x = x+1 ; x < strlen(nomeCompleto) ; x++){
                sobrenome[y] = nomeCompleto[x];
                y++;
            }
            sobrenome[y] = '\0';
            printf("\n sobrenome: %s",sobrenome);
            break;
        }
    }

}

int main(){
    char nomeCompleto[80];

    printf("Digite seu nome completo: ");
    fgets(nomeCompleto,80,stdin);

    fArranjaNome(nomeCompleto);
    }
