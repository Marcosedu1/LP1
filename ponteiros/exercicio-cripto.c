#include <stdio.h>
#include <string.h>

void Cripto(char *texto1,char *texto2){
    char controle1[15]="Afmceq2pinrg56";
    char controle2[15]="aSCkj4d7h8bv91";

    strcpy(texto2,texto1);

    for(int i = 0;i < strlen(texto1);i++){
        for(int j = 0;j < strlen(controle1);j++){
            if(*(texto1+i) == *(controle1+j)){
                *(texto2+i) = *(controle2+j);
            }else if(*(texto1+i) == *(controle2+j)){
                *(texto2+i) = *(controle1+j);
            }
        }
    }
}

int main(){
    char texto1[9], texto2[9], texto3[9];
    printf("Informe um texto de ate 8 caracteres:");
    fgets(texto1, 9,stdin);
    Cripto(texto1, texto2);
    Cripto(texto2, texto3);
    printf("\nO texto criptografado eh: %s\ntexto descriptografado eh: %s\n", texto2, texto3);
    return 0;
}
