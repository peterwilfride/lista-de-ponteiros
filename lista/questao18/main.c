#include <stdio.h>
void soma(int v1[],int v2[],int v3[],int qtd)
{
    int i;
    for(i=0;i<qtd;i++)
    {
        v3[i]=v1[i]+v2[i];
    }
}
int main()
{
    int qtd,i,j;
    printf("digite a quantiade de valores\n");
    scanf("%d",&qtd);
    int v1[qtd],v2[qtd],v3[qtd];
    for (i=0;i<2;i++) {
        for (j=0;j<qtd;j++) {
            if(i==0)
            {
                printf("digite o valor v1[%d]\n",j);
                scanf("%d",&v1[j]);
            }else {
                printf("digite o valor v2[%d]\n",j);
                scanf("%d",&v2[j]);

            }
        }
    }
    soma(v1,v2,v3,qtd);
     printf("valores de v3:\n");
    for (i=0;i<qtd;i++) {
        printf("%d ",v3[i]);
    }
    printf("\n");
    return 0;
}
