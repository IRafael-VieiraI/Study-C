/*
1. Desenvolva um algoritmo para calcular os 30 primeiros números
da sequência de Fibonacci. Em seguida, peça para o usuário
informar qual o é a posição na sequência que ele deseja conhecer o
número. Mostre o número da posição que o usuário requereu.
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
		printf("\nIndice: %d \t Posição: %d \t valor: %d", i, i+1, val_fibo[i]);
		}
	printf("\n\nem qual posição na sequência você deseja ver o número? ");
	scanf("%d", &posicao);
	printf("\nFibonacci na posição: %d \t valor:%d", posicao, val_fibo[posicao]);
	
}
