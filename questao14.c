#include <stdio.h>
#include <stdlib.h>

/* Função q retorna um valor inteiro:
    Valor maior do que zero: se o primeiro valor for maior do que o segundo.
    Valor menor do que zero: se o primeiro valor for menor do que o segundo.
    Zero: se os valores forem iguais.*/
int comparador(const void *a, const void *b) {
   return (*(int*)a - *(int*)b);
}

int main () 
{
    /*Declaração do ponteiro para o vetor e a variável do tipo inteiro que irá armazenar a quantidade de elementos do vetor.*/
    float *vetor;
    int n;

    /*Alocando dinamicamente o ponteiro vetor na mémoria do computador.*/
    vetor = malloc(n * sizeof(float));

    /*Obtendo do usuário a quantidade de elementos do array.*/
    printf("Digite a quantidade N de números a serem lidos: \n");
    scanf("%d", &n);

    /*Obtendo do usuário os elementos do array.*/
    printf("Digite os números: \n");
    for (int i = 0; i < n; ++i){
        scanf("%f \n", &vetor[i]);
    }

    /*Chamada da função qsort que irá ordenar o array de forma crescente. A função recebe como parâmetros um ponteiro para o primeiro elemento do array (vetor), n é o número de elementos do array, size é o tamanho em bytes de cada elemento do array e comparador é um ponteiro para função criada para ordenar os elementos.*/
    qsort(vetor, n, sizeof(float), comparador);

    /*Imprimindo os elementos do array em ordem crescente.*/
    for(int i = 0; i < n; i++){
        printf("%f \n", vetor[i]);
    }
    return 0;
}