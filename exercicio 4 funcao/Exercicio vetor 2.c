#include <stdio.h>

int main()
{
    int vetA[25] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49};
    int vetB[25] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50};
    int vetC[50];
    int i, x=0;

    for(i = 0; i < 25; i++)
    {
        vetC[x] = vetA[i];
        printf("\nindice a[%d] - indice c[%d]", i, x, vetC[x]);
        x++;
        vetC[x] = vetB[i];
        printf("\nindice b[%d] - indice c[%d]", i, x, vetC[x]);
        x++;
    }
}
