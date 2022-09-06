#include <stdio.h>
#include <stdlib.h>

int main()
{
  int A,B,X;
    printf("\nOla, seja bem vindo/a a calculadora simples de dois numeros.");
    printf("\nInsira dois numeros, os mesmos nao podem ser negativo.");
    printf("\n\nInsira o primeiro numero: ");
    scanf("%d", &A);
    if (A<0) {
        printf("\nO numero que voce inseriu eh invalido.");
        printf("\nInsira um numero maior que 0:");
        scanf("%d", &A);
    }
    printf("\n\nInsira o segundo numero: ");
    scanf("%d", &B);
     if (B<0) {
        printf("\nO numero que voce inseriu eh invalido.");
        printf("\nInsira um numero maior que 0:");
        scanf("%d", &B);
    }
    X= A+B;
    printf("\nO resultado final eh: %d", X);
    printf("\nO primeiro numero foi: %d, O segundo numero inserido foi: %d", A,B);
    return 0;
}
