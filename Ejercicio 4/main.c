#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, resta;

   printf("ingrese numero 1: ");
   scanf("%i",&num1);
   printf("ingrese numero 2: ");
   scanf("%i",&num2);

   resta=num1-num2;
   if(resta<0)
   {
       printf("Resultado negativo");
   }
   else
   {
       if(resta>0)
       {
           printf("Resultado positivo");
       }
       else
       {
           printf("El Resultado es cero");
       }
   }



   return 0;
}
