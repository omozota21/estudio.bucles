#include <stdio.h>

#define TAMV(v) sizeof(v) / sizeof(v[0])


void main(void)
{

    int v[] = {11, 22, 33, 44, 55, 66, 77, 88, 99};

        int ac = 0;
            for (int j = 0; j < TAMV(v); j++)
            {
                ac += v[j];
            } 
            int reusltado = ac / 9;
        
            printf("acumulado: %d\n", reusltado);

            
}