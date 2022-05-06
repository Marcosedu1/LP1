#include <stdio.h>

// desenvolver a função
float fCalculaRenda1(float Publico){
   float RendaTotal;
   printf("\n------->%f",Publico);
   RendaTotal = (Publico * 0.1 * 5) + (Publico * 0.5 * 10) + (Publico * 0.3 * 20) + (Publico * 0.1 * 30);
   return RendaTotal;
}

void fCalculaRenda2(float Publico){
   float RendaTotal;
   printf("\n------->%f",Publico);
   RendaTotal = (Publico * 0.1 * 5) + (Publico * 0.5 * 10) + (Publico * 0.3 * 20) + (Publico * 0.1 * 30);
   printf ("\n%.2f", RendaTotal);
}

int main ()
{
    float Publico, RendaTotal;

    printf ("Qual foi o publico total?");
    scanf ("%f", &Publico);

    //chama a função
    //RendaTotal=fCalculaRenda1(Publico);
    fCalculaRenda2(Publico);

    //printf ("\n%.2f", RendaTotal);
}
