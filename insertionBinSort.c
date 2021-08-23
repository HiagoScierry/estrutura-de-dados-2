#include <stdio.h>
#include <stdlib.h>

#define N 5

void insertionBinSort(int *dados)
{

    int aux;
    int esq, dir, meio;

    for (int i = 1; i < N; i++)
    {

        aux = dados[i];
        esq = 0;
        dir = i;

        while (esq < dir)
        {
            meio = (esq + dir) / 2;
            if (dados[meio] <= aux)
            {
                esq = meio + 1;
            }
            else
            {
                dir = meio;
            }
        }

        for (int j = i; j > esq; j--)
        {
            dados[j] = dados[j - 1];
        }

        dados[dir] = aux;
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

    insertionBinSort(vetor);

    for (int i = 0; i < N; i++)
    {
        printf("Numero :%i\n", vetor[i]);
    }

    return 0;
}
