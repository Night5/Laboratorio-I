#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int numero;
    int contador=0;
    int contadorneg=0;

    for(i=0;i<10;i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d",&numero);

        if(numero>0) //cada vez que se ingrese un numero, se comprueba con el if, por eso va adentro.
        {
        contador++;
        }
        else
        {
        contadorneg++;
        }
    }

    printf("La cantidad de numeros positivos es: %d",contador);
    printf("\nLa cantidad de numeros negativos es: %d",contadorneg);


    /*cuando queremos utilizar el contador, tenemos que razonar segun lo que te pida.
    en este caso, dice: "si numero es mayor a 0, se suma uno"*/

    return 0;
}
