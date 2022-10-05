/*
1. Desenvolva um algoritmo para calcular os 30 primeiros n�meros
da sequ�ncia de Fibonacci. Em seguida, pe�a para o usu�rio
informar qual o � a posi��o na sequ�ncia que ele deseja conhecer o
n�mero. Mostre o n�mero da posi��o que o usu�rio requereu.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //biblioteca caracteres especiais
int main () {
	setlocale(LC_ALL, "Portuguese");
	int val_fibo[30], i, posicao;
	val_fibo[0]=1;
	val_fibo[1]=1;
		for(i=2;i<30;i++) {
		val_fibo[i]=val_fibo[i-1] + val_fibo[i-2];	
	}
		for(i=0;i<30;i++){
		printf("\nIndice: %d \t Posi��o: %d \t valor: %d", i, i+1, val_fibo[i]);
		}
	printf("\n\nem qual posi��o na sequ�ncia voc� deseja ver o n�mero? ");
	scanf("%d", &posicao);
	printf("\nFibonacci na posi��o: %d \t valor:%d", posicao, val_fibo[posicao]);
	
}
