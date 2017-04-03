#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i;
   int contador=0;

   for(i=0;i<100;i++)
   {
    if(i%2!=0) //en cado de que el resto sea 0, te lo muestra.
     {
     printf("%d\n",i);
     contador++;
     }
   }

   printf("La cantidad de impares es: %d",contador);

    return 0;
}
