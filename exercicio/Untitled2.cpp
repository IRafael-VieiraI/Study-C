#include <stdio.h>
#include <locale.h> //necess�rio para usar setlocale
main () {
	 setlocale(LC_ALL, "Portuguese");
	 
	int numeroInserido, i, multiplicador, resulTab;
	printf("\nInsira qual numero voc� vai querer ver a tabuada de 0 a 10: ");
	printf ("\nEsse mesmo n�mero tem que ser do tipo inteiro, uma vez que, a tabuada � de valores inteiros:");
	scanf("%d", &numeroInserido);
	for (i=1; i <=10; i++)  {
		
		resulTab = numeroInserido * i;	
		printf("\n%d x %d = %d", numeroInserido, i, resulTab);
			
	}
	return 0;
}
