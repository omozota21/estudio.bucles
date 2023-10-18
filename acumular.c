#include <stdio.h>

#define TAMV(v) sizeof(v) / sizeof(v[0])

void main(void)
{

    int v[] = {11, 22, 33, 44, 55, 66, 77, 88, 99};
    // int v[] = {11};
    // int v[] = {};

    // impresion del espacio
    for (int j = 0; j < TAMV(v); j++)
    {
        printf("actual w for   %d\n", v[j]);
    }

    // // acumulado de datos
    // int ac = 0;
    // for (int j = 0; j < TAMV(v); j++)
    // {
    //     ac += v[j];
    // }
    // printf("acumulado: %d\n", ac);

    // busqueda (operador 'in')
    // int target = 11;
    // int target = 22;
    // int target = 99;
    int target = 666;

    for (int j = 0; j < TAMV(v); j++)
    {
        if (v[j] == target)
        {
            printf("%d PRESENTE @ %d\n", target, j);
            break;
        }
    }
}

