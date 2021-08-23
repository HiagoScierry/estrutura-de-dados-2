#include <stdio.h>
#include <stdlib.h>

#define N 5

void insertionSort(int *dados){

    int j, aux;

    for (int i = 0; i < N; i++)
    {
        
        aux = dados[i];

        j = i - 1;

        while (j>=0 && aux < dados[j])
        {
            dados[j+1] = dados[j];
            j--;
        }

        if(j != 0){
            dados[j+1] = aux;
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

    insertionSort(vetor);

    for (int i = 0; i < N; i++)
    {
        printf("Numero :%i\n", vetor[i]);
    }

    return 0;
}
