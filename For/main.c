#include <stdio.h>
#include <stdlib.h>
    /*o vetor � uma vari�vel que guarda
    a quantidade de valores que a gente
    permitir, sendo assim, nesse exemplo
    eu coloquei 5 valores, 5 objetos
    para ficarem nesse vari�vel chamada vetor
    ou seja, o vetor � nada mais nada menos
    do que uma vari�vel com diversos valores,
    objetos dentro dele.
    Quando a gente declara um vetor na
    posi��o 5, na verdade estamos decla-
    rando 6 valores, isso acontece porque
    o vetor come�a na posi��o 0, ent�o vai
    do 0 ao 5. que contabiliza 6 possibilidades.*/

int main(){
    int A=5, i, vet[5];
    for(i=1; i<6; i++) {
    printf("\n%d", i);
    }
    /*O la�o for � uma estrutura de repeti-
    ��o, utilizada quando se sabe de antem�o
    quantas vezes a repeti��o devera ser exe-
    cutada.
    Nesse c�digo estamos declarando que a nossa var
    I = 0, que a nossa var i vai se repetir at�
    quando o n�mero da repeti��o for <6, ou seja,
    5 e n�s vamos aumentar o objeto do vetor em 1
    a cada estrutura de repeti��o, feito isso
    n�s pedimos ao usu�rio inserir o valor que
    ele vai querer guardar na posi��o 0, dps na 1,
    na 2, etc...
    por fim, n�s escaneamos esses valores e guardamos no vetor os valores de I*/


    return 0;
}
