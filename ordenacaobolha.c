#include <stdio.h>
#include <stdlib.h>

#define N 5

void sortBolha(int *dados)
{
    int aux;

    for (int i = N - 1; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
        {

            if (dados[j] > dados[j + 1])
            {
                aux = dados[j];
                dados[j] = dados[j + 1];
                dados[j + 1] = aux;
            }
        }
    }
}

void sortBolhaComParada(int *dados)
{
    int mudou = 1; //verdadeiro == 1 - falso == 0
    int indice = N;
    int i, j, aux;

    while (mudou == 1)
    {

        j = 1;
        mudou = 0;

        while (j < N)
        {
             if (dados[j-1] > dados[j])
            {
                aux = dados[j-1];
                dados[j-1] = dados[j];
                dados[j] = aux;
                mudou = 1;
            }
            indice = j;
            j = j + 1;

        }
    }
}


int main()
{
    int vetor[N];
    for (int i = 0; i < N; i++)
    {

        printf("Informe o numero : ");
        scanf("%i", &vetor[i]);
    }

    sortBolha(vetor);

    for (int i = 0; i < N; i++)
    {
        printf("Numero :%i\n", vetor[i]);
    }

    return 0;
}
