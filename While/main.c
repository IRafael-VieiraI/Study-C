#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador = 1;
    while (contador <=5) /*verifica e executa*/ {
        printf("%i\n", contador);
        ++contador; /* a gente está
colocando o ++contador para que o while
(enquanto), ficar repetindo, ele vai add
+1 no valor da var do contador, ou seja
fazendo-se assim com que o valor final pare
em 5, e ele não fique entrando em loop toda vez.*/
    }

    return 0;
}
