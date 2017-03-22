#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    int num3;
    int num4;
    int num5;
    float promedio;

    printf("Ingrese un numero \n");
    scanf("%d",&num1);
    printf("Ingrese un numero \n");
    scanf("%d",&num2);
    printf("Ingrese un numero \n");
    scanf("%d",&num3);
    printf("Ingrese numero 1\n");
    scanf("%d",&num4);
    printf("Ingrese numero 1\n");
    scanf("%d",&num5);

    promedio = (num1+num2+num3+num4+num5)/5;

    printf("El promedio es: %.2f", promedio);

    return 0;
}
