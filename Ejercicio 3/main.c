#include <stdio.h>
#include <stdlib.h>

int main()
{
      int num1;
    int num2;
    int producto;
    int cuadrado;

    system("cls");//borra la pantalla

    printf("ingrese numero 1: ");
    scanf("%i",&num1);
    while(num1==0)
    {
        printf("ingrese numero 1: ");
        scanf("%i",&num1);
    }
    printf("ingrese numero 2: ");
    scanf("%i",&num2);
    while(num2==0)
    {
        printf("ingrese numero 2: ");
        scanf("%i",&num2);
    }
    producto=num1*num2;
    cuadrado=num1*num1;

    printf("El producto es: %i \n",producto);
    printf("el cuadrado del numero 1 es: %i",cuadrado);

    return 0;
}
