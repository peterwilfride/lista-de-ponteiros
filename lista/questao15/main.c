#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compare (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
   //função compare compara 2 elemento e retorna -1, 0 ou 1 se for, respectivamente, menor, igual
   //ou maior
}

int main()
{
    int n, i;
    srand(time(0));

    printf("tamanho do vetor: ");
    scanf("%d", &n);
    int values[n];

    for(i=0;i<n;i++){
        values[i]=rand()%100; //gera numeros aleatórios
    }

    printf("\nvetor não ordenado\n");
    for(i=0;i<n;i++){
        printf("%d ", values[i]);
    }

    printf("\nvetor ordenado\n");
    qsort(values, n, sizeof(int), compare); //função da biblioteca c que recebe como argumentos
    //um vetor para ser ordenado, o numero de elementos, o tamanho do tipo a ser ordenado e um ponteiro
    //para um função compare. com esses 4 argumentos, a função que é de fatp executada
    for(i=0; i<n; i++)
        printf("%d ", values[i]);

    return 0;
}
