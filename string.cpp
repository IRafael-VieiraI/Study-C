#include <stdio.h>
/*
	Strings
	& n�o aparece no scanf quando o tipo de var � string 
	o final da string � sinalizado pelo \0
*/
int main () 
{
	int i; 
	char texto[20], nomes[5][100];
//	printf("Escreva uma frase: \n");
//	// lendo at� o primeiro espa�o a gente usa o scanf 
//	// se a gente der um espa�o, o printf n�o reconhece mais o que vem depois
//	scanf("%s", texto);
//	printf("\n\n Texto digitado: %s", texto);
//	printf("\n\n Escreva uma nova frase:\n");
//	// para voc� ler at� o caractere que voc� quer:
//	// o n�mero depois da % � para limitar a quantidade de caracteres que vai ter no scanf
//	scanf("%19[^\n]", texto);
//	// aqui nesse exemplo ele vai ter at� o \n, que nesse caso � o \n no final da frase.
//	printf("\N A nova frase eh: %s", texto);
//	getchar();
//	// copia do conte�do do vetor no texto
//	printf("\n Conteudo do vetor texto: \n");
//	for(i=0;i<20;i++) {
//		printf("%2d: %c \n", i, texto[i]);
//	}
	//para imprimir conte�do do vetor ASCII
	//printf("\n Conteudo do vetor ASCII: \n");
//	for(i=0;i<20;i++) {
//		printf("%2d: %d \n", i, texto[i]);
//	}

	// recebendo uma matriz com strings
	
	printf("\nInforme uma sequencia de 5 nomes: \n");
	for(i=0;i<5;i++)
	{
	printf("Nome %d: ", i+1); // para aparecer nome 1.
	getchar();
	scanf("%99[^\n]", nomes[i]);
	}
	// Mostrando uma matriz com strings
	printf("Os nomes informados foram: ");
	for(i=0; i<5;i++)
	{
		printf("\n\n%s", nomes[i]);
		
	}
	return 0;
}
