#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, cuadrado;

    printf("ingrese numero 1: ");
    scanf("%i",&num1);
    while(num1<1)
    {
        printf("ERROR, el numero debe ser mayor que cero\n");
        printf("ingrese numero 1: ");
        scanf("%i",&num1);
    }
    cuadrado=num1*num1;

    printf("el cuadrado del numero 1 es: %i",cuadrado);

    return 0;
}
