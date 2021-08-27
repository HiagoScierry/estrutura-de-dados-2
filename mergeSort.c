#include <stdio.h>
#include <stdlib.h>

#define N 5

void intercalacao(int *dados, int inicio, int  fim, int  meio)
{
    int i = inicio;
    int j = meio + 1;
    int k = 0;
    int temp[N];

    while (i <= meio || j <= fim)
    {
        if(i == meio + 1 || dados[j] < dados[i] && j != fim + 1){
            temp[k] = dados[j];
            j = j + 1;
            k = k + 1;
        } else {
            temp[k] = dados[i];
            i = i + 1;
            k = k + 1;
        }
    }
    
    for (int i = inicio; i < fim; i++)
    {
        dados[i] = temp[i - inicio];
    }
    
}


mergeSort(int *dados, int inicio, int fim){
    int meio;

    if(inicio < fim){
        meio = (inicio + fim) / 2;

        mergeSort(dados, inicio, meio);
        mergeSort(dados, meio + 1, fim);

        intercalacao(dados, inicio, fim, meio);
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

    mergeSort(vetor, 0, 4);

    for (int i = 0; i < N; i++)
    {
        printf("Numero :%i\n", vetor[i]);
    }

    return 0;
}
