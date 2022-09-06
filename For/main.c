#include <stdio.h>
#include <stdlib.h>
    /*o vetor é uma variável que guarda
    a quantidade de valores que a gente
    permitir, sendo assim, nesse exemplo
    eu coloquei 5 valores, 5 objetos
    para ficarem nesse variável chamada vetor
    ou seja, o vetor é nada mais nada menos
    do que uma variável com diversos valores,
    objetos dentro dele.
    Quando a gente declara um vetor na
    posição 5, na verdade estamos decla-
    rando 6 valores, isso acontece porque
    o vetor começa na posição 0, então vai
    do 0 ao 5. que contabiliza 6 possibilidades.*/

int main(){
    int A=5, i, vet[5];
    for(i=1; i<6; i++) {
    printf("\n%d", i);
    }
    /*O laço for é uma estrutura de repeti-
    ção, utilizada quando se sabe de antemão
    quantas vezes a repetição devera ser exe-
    cutada.
    Nesse código estamos declarando que a nossa var
    I = 0, que a nossa var i vai se repetir até
    quando o número da repetição for <6, ou seja,
    5 e nós vamos aumentar o objeto do vetor em 1
    a cada estrutura de repetição, feito isso
    nós pedimos ao usuário inserir o valor que
    ele vai querer guardar na posição 0, dps na 1,
    na 2, etc...
    por fim, nós escaneamos esses valores e guardamos no vetor os valores de I*/


    return 0;
}
