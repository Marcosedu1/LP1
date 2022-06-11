#include <stdio.h>
#include <string.h>

int fReplace(char *string){
    int substituicoes;
    int i;
    for(i=0;i < strlen(string);i++){
        if(*(string+i)== ' '){
            *(string+i) = '-';
            substituicoes++;
        }
    }
    return substituicoes;
}

int main(){
    char string[50];
    int substituicoes;

    printf("Digite uma string: ");
    fgets(string,50,stdin);

    substituicoes = fReplace(string);
    printf("\nstring:\n%s",string);
    printf("\nsubstituicoes: %i",substituicoes);
}
