#include <stdio.h>
#include <stdlib.h>
//float é para numeros decimais
/* vars principais:
 int: para números inteiros, -1, -2, -3, 0, 1, 2, 3, etc...;
 float: para numeros decimais 0.1, 0.2, 0.3, 0.5, etc...;
 chars: para caracteres.
*/
int main()
{
    int aiquidilicia,B; // declarar var
    //aiquidilicia = 1; //atribuir valor para essa var
    printf("\n Digite o valor 01? \t");
    scanf("%d", &B); /*d = var do tipo inteiro, %f para var
                    do tipo float e %c*/
    printf ("\n Digite uma frase: \t");
    scanf(" %c", &aiquidilicia); //tem que dar espaco no %c, pois, se vc n fizer isso n tem como o usuário colocar a frase.
        printf("\n O numero que voce inseriu foi:\t %d", B);
    return 0;
}
