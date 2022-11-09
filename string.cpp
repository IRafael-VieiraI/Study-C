#include <stdio.h>
/*
	Strings
	& não aparece no scanf quando o tipo de var é string 
	o final da string é sinalizado pelo \0
*/
int main () 
{
	int i; 
	char texto[20], nomes[5][100];
//	printf("Escreva uma frase: \n");
//	// lendo até o primeiro espaço a gente usa o scanf 
//	// se a gente der um espaço, o printf não reconhece mais o que vem depois
//	scanf("%s", texto);
//	printf("\n\n Texto digitado: %s", texto);
//	printf("\n\n Escreva uma nova frase:\n");
//	// para você ler até o caractere que você quer:
//	// o número depois da % é para limitar a quantidade de caracteres que vai ter no scanf
//	scanf("%19[^\n]", texto);
//	// aqui nesse exemplo ele vai ter até o \n, que nesse caso é o \n no final da frase.
//	printf("\N A nova frase eh: %s", texto);
//	getchar();
//	// copia do conteúdo do vetor no texto
//	printf("\n Conteudo do vetor texto: \n");
//	for(i=0;i<20;i++) {
//		printf("%2d: %c \n", i, texto[i]);
//	}
	//para imprimir conteúdo do vetor ASCII
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
