#include <stdio.h>

int func(int x, int y){
    return x + y;
}

int main()
{
    int x, y;

    int (*soma) (int, int);

    printf("Digite dois valores para serem somados: \n");
    scanf("%d %d", &x, &y);

    soma = func;

    printf("O valor da soma é: %d \n", soma(x, y));


    return 0;
}

