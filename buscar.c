#include <stdio.h>

#define TAMV(v) sizeof(v) / sizeof(v[0])
#define TRUE 1
#define FALSE 0

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
    int target = 99;
    // int target = 666;
    
    int encontrado = FALSE;
    
    for (int j = 0; j < TAMV(v); j++)
    {
        if (v[j] == target)
        {
            encontrado = TRUE;
            printf("%d TRUE @ %d\n", target, j);
            break;
        }
    }
    if (!encontrado)
    {
        printf("%d FALSE\n", target);
    }

    












}


