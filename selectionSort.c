#include <stdio.h>
#include <stdlib.h>

#define N 5

void selectionSort(int *dados)
{
    int menor, aux;

    for (int i = 0; i < N - 1; i++)
    {
        menor = i;
        for (int  j = i+1; j < N; j++)
        {
            if(dados[j] < dados[menor]){
                menor = j;
            }
        }

        if(i != menor){
            aux = dados[menor];
            dados[menor] = dados[i];
            dados[i] =  aux;
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

    selectionSort(vetor);

    for (int i = 0; i < N; i++)
    {
        printf("Numero :%i\n", vetor[i]);
    }

    return 0;
}
