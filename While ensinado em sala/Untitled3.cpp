#include <stdio.h>
#include <locale.h>
/*
Estrutura de repetição enquanto (while)
	estrutura:
	while (condição) {
		ação (enquanto a condição for verdadeira)
}
*/
main () {
	setlocale(LC_ALL, "Portuguese");
	int A = 1;
	while (A>0) {
		printf("\n\t Informe um valor negativo:");
		scanf("%d", &A);
	}
	return 0;
}
