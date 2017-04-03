#include <stdio.h>
#include <stdlib.h>

int main()
{
    int radio;
    int longitud;
    float area;

    printf("Ingrese radio: ");
    scanf("%d",&radio);
    longitud= radio*radio;
    area=3.14*longitud;
    printf("La longitud es: %d",longitud);
    printf("\nEl area es: %.2f",area);


    /*En este caso, tenemos que sacar la longitud y el area.
    Pero primero se debe sacar la radio que seria la longitud en su totalidad
    (ya que la radio es solo la mitad de la longitud), una vez obtuvida la longitud,
    sacamos el area.

    longitud= radio*radio
    area= (3.14) pi*radio(2)*/

    return 0;
}
