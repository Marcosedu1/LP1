#include <stdio.h>

int main(){
    char vetChar[5]={"Cris"}, *p;
    printf("\nVetchar: %s", vetChar);
    p=vetChar;
    //mesma coisa que vetChar[0]; *vetchar;
    while(*p != '\0'){
        printf("\n%c %p", *p, p);
        p++;
        //vetChar++ NÃO PODE
    }
    printf("\n");
    for(int i = 0;i<strlen(vetChar);i++){
        printf("\n%c %p", *(vetChar+i), vetChar+i);
        //vetChar++ NÃO PODE
    }
}
/*int vetInt[5]={10, 20, 30, 40, 50};

    int *pont, num;

    printf("\nNome do Vetor Int: %p",vetInt); //Mostra o endereco de memoria
    printf("\nNome do Vetor Char: %p",vetChar); // Mostra o endereco de memoria

    for(int i=0;i<5;i++){
        printf("\nValor: %i Endereco: %p",*(vetInt+i),vetInt+i);
    }
    pont=vetInt;
    pont=&num;
    pont=vetInt+3;
    vetInt=pont;
*/
