#include <stdio.h>

int main()
{

   float num1, num2;
   int opcao;

   printf("Informe um numero");
   scanf("%f",&num1);
   printf("Informe uma opcao");
   scanf("%i",&opcao);
   printf("Informe um numero");
   scanf("%f",&num2);
   switch (opcao)
   {
      case 1:
      case 2:
	  {
	    printf("Soma: %.2f",num1+num2);
		break;
	  }
	  case 3:
	  {
	    printf("Subtracao: %.2f",num1-num2);
		break;
	  }
	  default:
	  {
	    printf("Opcao invalida");
		break;
      }
   }

   /* se fosse if
   if (opcao == 1)
     printf("Soma: %.2f",num1+num2);
   else
   if (opcao == 2)
     printf("Subtracao: %.2f",num1-num2);
   else
     printf("Opcao invalida");

   */
}
