#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    //printf("Hello World!\n");
    int n,*p,i,j;

    printf("Digite a quantidade de numeros: ");
    scanf("%d",&n);
    p=(int*)malloc(sizeof(int)*n);
    srand(time(0));
    printf("vetor: \n");
    for(i=0;i<n;i++)
    {
        p[i]=rand()%100;
        printf("%d ",p[i]);
    }
    for (i=1;i<n;i++) {

        for (j=0;j<n-1;j++) {

            if (p[j]>p[j+1]) {
                int aux=p[j];
                p[j]=p[j+1];
                p[j+1]=aux;
            }
        }
    }
    printf("\nvetor ordenado: \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",p[i]);
    }
    printf("\n");
    return 0;
}
