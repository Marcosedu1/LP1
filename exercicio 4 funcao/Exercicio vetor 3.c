#include <stdio.h>

int main()
{
    int vetA[20] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39};
    int vetB[20] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40};
    int vetC[20];
    int i;

    for(i = 0; i < 20; i++)
    {
        vetC[i] = vetA[i] + vetB[i];
        printf("\nVetor A [%d] + Vetor B [%d] = Vetor C [%d]", vetA[i], vetB[i], vetC[i]);
    }
}
