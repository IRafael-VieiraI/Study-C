/*
Exerc�cio 3 � Crie um algoritmo que fa�a a leitura dos dois lados de
um ret�ngulo em cm e exiba o valor da �rea em m2.
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
    printf("\nInsira o primeiro lado do ret�ngulo em cm: ");
     scanf("%f", &l1);
    printf("\nInsira o segundo lado do ret�ngulo em cm: ");
     scanf("%f", &l2);
    calc = (l1*l2)/10000;
    printf("O valor em m� �: %f \n", calc); /* explicar, falha!*/
    return 0;
}
