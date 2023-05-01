#include <stdio.h>
#include <stdlib.h>

void multMatri(int **matriz1, int **matriz2, int **matriz3, int la, int ca, int cb){
    int aux = 0;

    for(int i = 0; i < la; i++) {
		for(int j = 0; j < cb; j++) {
			
			matriz3[i][j] = 0;
			for(int x = 0; x < ca; x++) {
				aux +=  matriz1[i][x] * matriz2[x][j];
			}

			matriz3[i][j] = aux;
			aux = 0;
		}
	}
}

int main() {
    int linhaA, colunaA, colunaB;

    printf("\n Informe a quntidade de linhas da matriz A : ");
    scanf("%d",&linhaA);
    printf("\n Informe a quantidade de colunas da matriz A : ");
    scanf("%d",&colunaA);
    printf("\n Informe a quantidade de colunas da matriz B : ");
    scanf("%d",&colunaB);


    int **mat1, **mat2, **mat3;

    mat1 = (int *) calloc(linhaA, sizeof(int*));
    for (int i = 0; i < linhaA; i++)
    {
        mat1[i] = (int *) calloc(colunaA, sizeof(int));
    }

    mat2 = (int *) calloc(colunaA, sizeof(int*));
    for (int i = 0; i < colunaA; i++)
    {
        mat2[i] = (int *) calloc(colunaB, sizeof(int));
    }

    mat3 = (int *) calloc(linhaA, sizeof(int*));
    for (int i = 0; i < linhaA; i++)
    {
        mat3[i] = (int *) calloc(colunaB, sizeof(int));
    }
    
  
    printf ("\nDigite valor para os elementos da matriz 1:\n\n");
  
    for (int i=0; i<linhaA; i++ ){
        for (int j=0; j<colunaA; j++ ){
            printf ("\nElemento[%d][%d] = ", i, j);
            scanf ("%d", &mat1[ i ][ j ]);
        }
    }

    printf ("\nDigite valor para os elementos da matriz 2:\n\n");
    for (int i=0; i<colunaA; i++ ){
        for (int j=0; j<colunaB; j++ ){
            printf ("\nElemento[%d][%d] = ", i, j);
            scanf ("%d", &mat2[ i ][ j ]);
        }
    }

    multMatri(mat1, mat2, mat3, 2, 3, 4);

    printf ("\nOs valores dos elementos da matriz 3:\n\n");
    for (int i=0; i<linhaA; i++ ){
        for (int j=0; j<colunaB; j++ ){
            printf ("\nElemento[%d][%d] = %d\n", i, j,mat3[ i ][ j ]);
        }
    }
}