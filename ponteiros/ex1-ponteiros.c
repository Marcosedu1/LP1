#include <stdio.h>
int main(){
    float valores[10], *p;

    p = &valores[0]; //atribui o endereco do indice 0
    printf("%p %p\n", valores, p);

    p = valores; //atribui o endereco do indice 0
    printf("%p %p\n", valores, p);

    p = &valores[1];
    printf("%x %p\n", p - valores, p);

    p = &valores[6];
    printf("%x %p\n", p - valores, p); //endereco do indice 6 - o endereco do indice 0
}
