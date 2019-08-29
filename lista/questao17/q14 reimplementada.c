#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compare (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int main()
{
    int n, i;
    srand(time(0));
    clock_t t;

    printf("tamanho do vetor: ");
    scanf("%d", &n);
    int values[n];

    for(i=0;i<n;i++){
        values[i]=rand()%100;
    }

    printf("\nvetor não ordenado\n");
    for(i=0;i<n;i++){
        printf("%d ", values[i]);
    }

    printf("\nvetor ordenado\n");
    t = clock();
    qsort(values, n, sizeof(float), compare);
    for(i=0; i<n; i++)
        printf("%d ", values[i]);
    t = clock() - t;

    printf("\ntempo de execução: %f segs\n", (((float)t)/CLOCKS_PER_SEC));

    return 0;
}
