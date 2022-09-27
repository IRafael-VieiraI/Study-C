/*
Exercício 3 – Crie um algoritmo que faça a leitura dos dois lados de
um retângulo em cm e exiba o valor da área em m2.
*/
// cm = area/10000
// dois inputs,
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "Portuguese");
float l1, l2, calc, area;
    printf("\nInsira o primeiro lado do retângulo em cm: ");
     scanf("%f", &l1);
    printf("\nInsira o segundo lado do retângulo em cm: ");
     scanf("%f", &l2);
    calc = (l1*l2)/10000;
    printf("O valor em m² é: %f \n", calc); /* explicar, falha!*/
    return 0;
}
