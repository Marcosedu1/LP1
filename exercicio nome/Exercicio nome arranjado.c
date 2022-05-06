#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <windows.h>

void fArranjaNome(char *nomeCompleto){
    char sobrenome[25];
    char primeiroNome[25];
    int x, y = 0, z;

    for(x = 0 ; x < strlen(nomeCompleto) ; x++){
        primeiroNome[y] = nomeCompleto[x];
        if(nomeCompleto[x] == ' '){
            break;
        }
        y++;
    }
    primeiroNome[y] = '\0';
    printf("\n primeiro nome: %s",primeiroNome);
    y=0;
    for(x = strlen(nomeCompleto) -1 ; x >=0 ; x--){
        if(nomeCompleto[x] == ' '){
            for(z = x+1 ; z < strlen(nomeCompleto) ; z++){
                sobrenome[y] = nomeCompleto[z];
                y++;
            }
            sobrenome[y] = '\0';
            printf("\n sobrenome: %s",sobrenome);
            break;
        }
    }
    printf("\nNome Arranjando: %s, %s",sobrenome,primeiroNome);
}

int main(){
    char nomeCompleto[80];

    printf("Digite seu nome completo: ");
    fgets(nomeCompleto,80,stdin);

    fArranjaNome(nomeCompleto);
    }
