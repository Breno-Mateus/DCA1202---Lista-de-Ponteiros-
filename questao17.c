#include <stdio.h>

void soma_vetores(int *x, int *y, int *z, int t){
    for(int i = 0; i < t; i++){
        z[i] = x[i] + y[i];
    }
}

int main()
{
    int tam;

    printf("Digite o tamanho dos vetores: \n");
    scanf("%d", &tam);

    int vet1[tam], vet2[tam], resultado[tam];

    printf("Digite os valores do vetor1: \n");
    for (int i = 0; i < tam; i++){
        scanf("%d", &vet1[i]);
    }

    printf("Digite os valores do vetor2: \n");
    for (int i = 0; i < tam; i++){
        scanf("%d", &vet2[i]);
    }

    soma_vetores(vet1, vet2, resultado, tam);
    
    return 0;
}
