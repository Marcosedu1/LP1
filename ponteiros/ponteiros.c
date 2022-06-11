#include <stdio.h>

 int main(){
     int num, *pontNum;
     char letra, *pontLetra;
     pontNum=&num;
     pontLetra=&letra;

     num = 10;
     letra = 'A';

     printf("\nNum: %i",num);
     printf("\nLetra: %c",letra);

    //Retorna endereco de memoria
     printf("\nEndereco de Num: %p",&num);
     printf("\nEndereco de Letra: %p",&letra);

     printf("\nEndereco de Num: %p",pontNum);
     printf("\nEndereco de Letra: %p",pontLetra);

     printf("\nEndereco de Num: %p",&pontNum);
     printf("\nEndereco de Letra: %p",&pontLetra);

     scanf("%i",&num);
 }
