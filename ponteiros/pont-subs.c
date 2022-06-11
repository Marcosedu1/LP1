#include <stdio.h>

void cripto(char *string){
    strrev(string);
}

int main(){
    char vetChar[100];
    printf("Informe uma string: ");
    gets(vetChar);
    cripto(vetChar);
    printf("Invertida: %s",vetChar);
}
