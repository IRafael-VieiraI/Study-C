#include <stdio.h>
/* 
	Calcula a média simples de n notas
*/
int main() {
	int i, qntNotas;
	float p, acumulador, media;
	printf("\n insira a quantidade de notas que voce vai querer fazer o calculo: ");
	scanf("%d", &qntNotas);
	while (qntNotas < 0) {
		printf("\n\tValor inserido invalido.");
		printf("\n\tO numero de provas deve ser positivo. ");
		printf("\n insira a quantidade de notas que voce vai querer fazer o calculo: ");
		scanf("%d", &qntNotas);
			}
	for (i=1; i<=qntNotas; i++) 
	{
		printf("Insira a nota %d: ", i);
		scanf("%f", &p);
		while ((p<0)||(p>10))
		{
			printf ("\n\tValor inserido invalido");
			printf ("\n\tO valor da nota de prova deve estar entre 0 e 10.");
			printf("\nInsira a nota %d: ", i);
			scanf("%f", &p);	
					}
		acumulador = acumulador+p;	
	}
	media = acumulador/ qntNotas;
	printf("\n Media: %.2f", media);
	
	return 0;
}
