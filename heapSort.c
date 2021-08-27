#include <stdio.h>
#include <stdlib.h>

#define N 5

void criaHeap(int *dados, int i, int f){
    int aux = dados[i];
    int j = i * 2 + 1;

     while (j <= f)
     {
         if(j < f && dados[j] < dados[j + 1]) {
             j = j + 1;
         }

         if(aux < dados[j]){
             dados[i] = dados[j];
             i = j;
             j = 2 * i + 1;
         } else {
             j = f + 1;
         }

     }

    dados[i] = aux;
}

void heapSort(int *dados){

    int aux;

    for (int i = (N - 1) / 2; i > 0; i--)
    {
        criaHeap(dados, i, N - 1);
    }
    
    for (int i = (N - 1) ; i > 1; i--)
    {
        aux = dados[0];
        dados[0] = dados[i];
        dados[i] = aux;
        criaHeap(dados, 0, i - 1);
        
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

    heapSort(vetor);

    for (int i = 0; i < N; i++)
    {
        printf("Numero :%i\n", vetor[i]);
    }

    return 0;
}