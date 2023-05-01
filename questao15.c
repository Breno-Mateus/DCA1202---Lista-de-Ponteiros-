#include <stdio.h>
#include <stdlib.h>

int comparador(int *a, int *b) {
    return ( *(int*)a - *(int*)b );
}

int main () 
{
    int (*pf) (int, int);
    
    pf = comparador;

    int *vetor;
    int n;

    vetor = malloc(n * sizeof(int));

    printf("Digite a quantidade N de números a serem lidos: \n");
    scanf("%d", &n);

    printf("Digite os números: \n");
    for (int i = 0; i < n; ++i){
        scanf("%d", &vetor[i]);
    }

    qsort(vetor, n, sizeof(int), pf);

    for(int i = 0; i < n; i++){
        printf("%d \n", vetor[i]);
    }
    return 0;
}