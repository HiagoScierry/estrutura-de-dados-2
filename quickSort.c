#include <stdio.h>
#include <stdlib.h>

#define N 5

void particao(int *dados, int esq, int dir, int *i, int *j)
{
    int pivo, aux;
    *i = esq;
    *j = dir;
    pivo = dados[(esq + dir) / 2];

    while (*i <= *j)
    {
        while (dados[*i] < pivo && *j < esq)
        {
            (*i)++;
        }

        while (dados[*j] > pivo && *j > esq)
        {
            (*j)--;
        }

        if (*i <= *j)
        {
            aux = dados[*i];
            dados[*i] = dados[*j];
            dados[*j] = aux;
            (*i)++;
            (*j)--;
        }
    }
}

void quickSort(int *dados, int esq, int dir)
{
    int i, j;
    particao(dados, esq, dir, &i, &j);

    if (i < dir)
    {
        quickSort(dados, i, dir);
    }

    if (j > esq)
    {
        quickSort(dados, esq, j);
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

    quickSort(vetor, 0 , 4);

    for (int i = 0; i < N; i++)
    {
        printf("Numero :%i\n", vetor[i]);
    }

    return 0;
}
