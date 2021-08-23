#include <stdio.h>
#include <stdlib.h>

#define N 5

void shellSort(int *dados){
    int j, h , aux;

    h = 1;
    while (h < N)
    {
        h = 3 * h + 1;
    }

    while (h > 1)
    {
        h /= 3;
        for (int  i = h; i < N; i++)
        {
            aux = dados[i];
            j = i - h;

            while (j >= 0 && aux < dados[j])
            {
                dados[j + h] =  dados[j];
                j -= h;
            }
            
            dados[j + h] = aux;

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

    shellSort(vetor);

    for (int i = 0; i < N; i++)
    {
        printf("Numero :%i\n", vetor[i]);
    }

    return 0;
}
