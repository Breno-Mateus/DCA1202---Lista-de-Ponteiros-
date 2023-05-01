#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    float  *x, a;
    int n;

    x = malloc(n * sizeof(float));

    printf("Digite a quantidade N de números a serem lidos: \n");
    scanf("%d", &n);
    
    printf("Digite os números: \n");
    for (int i = 0; i < n; ++i){
        scanf("%f", &x[i]);
    }
    
    for(int i = 0; i < n; ++i){
        for (int j = i + 1; j < n; ++j){
            
            if (x[i] > x[j]){
                
                a =  x[i];
                x[i] = x[j];
                x[j] = a;
            }
        }
    }
    
    printf("A sequência em ordem crescente dos números são: \n");
    for (int i = 0; i < n; ++i){
        printf("%f \n", x[i]);
    }
}