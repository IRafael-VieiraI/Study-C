/*

Vetores: Estruturas Homogêneas.

podemos ter vetor do tipo int, float, etc...
dec do vetor: var[] = { (valores) };
ele começa no indice 0;
'' = para 1 caracter;
"" = para string;

*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //biblioteca caracteres especiais

int main () {
	  setlocale(LC_ALL, "Portuguese");
	int i;
	//declarando vetores da maneira 01:
//	int vet_int1[5] = {1,2,452,4,5};
//	//printf("%d", vet_int1[100]);
//	
//	for(i=0;i<5;i++) {
//		printf("%d\t", vet_int1[i]);
//	}
//	
	int vet_int3[8];
	for(i=0;i<8;i++) {
		printf("Informe o valor para a posição %d: ", i);
		scanf("%d", &vet_int3[i]);
	}
	
	for(i=0;i<8;i++) {
		printf("Indice: %d\t\tvalor: %d\n", i, vet_int3[i]);
	}
	return 0;
	}

