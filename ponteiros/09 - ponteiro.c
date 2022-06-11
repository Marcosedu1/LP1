
#include <stdio.h>

int main(){

    int num, *pontnum;
    char letra='U', *pont;

    pontnum=&num;
    num=10;

    pont=&letra;

    printf("\nNum: %i",num);
    printf("\nLetra: %c",letra);

    printf("\nEndereco de Num: %p",&num);
    printf("\nEndereco Letra: %p",&letra);

    printf("\nPontNum: %p",pontnum);
    printf("\nPont: %p",pont);

    printf("\n&PontNum: %p",&pontnum);
    printf("\n&Pont: %p",&pont);

    printf("\n*PontNum: %i",*pontnum);
    printf("\n*Pont: %c",*pont);




    scanf("%i",&num);


}
