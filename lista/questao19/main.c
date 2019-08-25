#include <stdio.h>

void multmatrix(int *mA, int *mB, int *mC, int nla, int nca, int ncb){
    int i, j, k;
    for(i=0; i<nla; i++){
        for(j=0; j<ncb; j++){
            for(k=0; k<nca; k++){
                *(mC+(i*ncb)+j) += *(mA+(i*nca)+k)*(*(mB+(k*ncb)+j));
            }
        }
    }
}

int main()
{
    int i, j, cont=1;
    int nla=3;
    int nca=7;
    int ncb=5;
    int A[nla][nca];
    int B[nca][ncb];
    int C[nla][ncb];

    for(i=0; i<nla; i++){
        for(j=0; j<nca; j++){
            A[i][j]=cont;
            cont++;
        }
    }
    cont=1;
    for(i=0; i<nca; i++){
        for(j=0; j<ncb; j++){
            B[i][j]=cont;
            cont++;
        }
    }
    for(i=0; i<nla; i++){
        for(j=0; j<ncb; j++){
            C[i][j]=0;
        }
    }

    multmatrix(&A, &B, &C, nla, nca, ncb);

    printf("matriz A\n");
    for(i=0; i<nla; i++){
        for(j=0; j<nca; j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("matriz B\n");
    for(i=0; i<nca; i++){
        for(j=0; j<ncb; j++){
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    printf("matriz C=AB\n");
    for(i=0; i<nla; i++){
        for(j=0; j<ncb; j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
