#include <stdio.h>

//retorno  nome  parametros
void  main ( )
{
   float valor = 1000.0 ;
   int cont = 0 ;

   while ( cont < 1000*10 )
   {
      valor -= 0.1 ;
	  // valor=valor-0.1;
      cont++ ;
	  //cont = cont + 1;

   }
   printf ( "\nValor: %f  %d\n", valor, cont ) ;
   //return 0;
}
