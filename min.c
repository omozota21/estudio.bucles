#include <stdio.h>

#define TAMV(v) sizeof(v) / sizeof(v[0])


void main(void)
{

    int v[] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 2008};


    int min = v[0];
    for (int j = 0; j < TAMV(v); j++)
    {
               if (v[j] < min ) {
                min = v[j];
               } 
    }
    printf("El menor de todos es %d\n", min);
    
}