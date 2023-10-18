#include <stdio.h>

#define TAMV(v) sizeof(v) / sizeof(v[0])

void main(void)
{

    // int v[] = {11, 22, 33, 44, 55, 66, 77, 88, TAMV(v)TAMV(v)};
    // int v[] = {11};
    int v[] = {};

    int i = 0;
    while (i < TAMV(v))
    {
        printf("actual w while %d\n", v[i]);
        i++;
    }

    for (int j = 0; j < TAMV(v); j++)
    {
        printf("actual w for   %d\n", v[j]);
    }

    if (TAMV(v) != 0)
    {

        int k = 0;
        do
        {
            printf("actual w d-w   %d\n", v[k]);
            k++;
        } while (k < TAMV(v));
    }
}
