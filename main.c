#include <stdio.h>
#include <stdlib.h>

int main()
{
    ///Ingresar 30 valores.Contar cuantos están entre 1 y 10,
    ///cuantos entre 10 y 20, cuantos entre 20 y 30 y cuantos son mas
    ///de 30. Luego mostrar el porcentaje de cada grupo en el total.

    int num;
    int contador1 = 0, contador2 = 0, contador3 = 0, contador4 = 0;
    float porcentaje1, porcentaje2,porcentaje3, porcentaje4;



    for( int i = 0 ; i < 3 ; i++ )
    {
        printf(" \n ingrese el valor [%d]\n",i+1);
        fflush(stdin); scanf("%d", &num);

        if ( num >= 1 )
        {
            if ( num <= 10)
            {
                contador1 = contador1 + 1;
            }
        }
        if ( num > 10)
        {
            if ( num < 20)
            {
                contador2 = contador2 + 1;

            }

        }
        if ( num >= 20 )
        {
            if ( num <= 30)
            {
                contador3 = contador3 + 1;
            }
        }
        if ( num > 30)
        {
            contador4 = contador4 + 1;
        }

    }


    porcentaje1 = (contador1 * 100 ) / 3;
    porcentaje2 = (contador2 * 100 ) / 3;
    porcentaje3 = (contador3 * 100 ) / 3;
    porcentaje4 = (contador4 * 100 ) / 3;

    printf(" \n Contador entre  0 y 10 = %d y su porcentaje es = %f", contador1,porcentaje1);
    printf(" \n Contador entre  10 y 20 = %d y su porcentaje es = %f", contador2, porcentaje2);
    printf(" \n Contador entre  20 y 30 = %d y su porcentaje es = %f", contador3, porcentaje3);
    printf(" \n Contador mayor a 30 = %d y su porcentaje es = %f", contador4, porcentaje4);
    return 0;
}
