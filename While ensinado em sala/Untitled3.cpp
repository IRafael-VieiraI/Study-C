#include <stdio.h>
#include <locale.h>
/*
Estrutura de repeti��o enquanto (while)
	estrutura:
	while (condi��o) {
		a��o (enquanto a condi��o for verdadeira)
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
