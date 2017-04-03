#include <stdio.h>
#include <stdlib.h>

int main()
{
   int base;
   int altura;
   int superficie;


   printf("Ingrese base: ");
   scanf("%d",&base);
   printf("Ingrese altura: ");
   scanf("%d",&altura);

   superficie=(base*altura)/2;
   printf("La superficie es: %d",superficie);

   //superficie= (base*altura)/2


    return 0;
}
