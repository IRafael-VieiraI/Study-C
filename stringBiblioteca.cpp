#include <stdio.h>
#include <string.h>
/*
Modificando string <string.h>
	1) strlen() //retorna tamanho de uma string
		A = strlen(string);
		onde A é um inteiro
	2) strcmp() // faz comparação de strings, e vê quantos caracteres ela tem 
		texto1 = aaa
		texto2 = bbb
		A = strcmp(texto1,texto2); strcmp = string comparation  
			A < 0
		A = strcmp(texto2,texto1);
			A > 0;
		A = strcml(texto1, texto1);
			A = 0;	
	3) strcpy() //Copia uma string em outra
	   strcpy() //destino e origem. 
		char texto1[]="abc", texto2[10];
		strcpy(texto2, texto1);
			texto2 = "abc";
	4) strcat() //Concatenação de duas strings, ela é importante, um exemplo de utilização é para juntar nome e sobrenome de um formulário de exemplo. 
	   strcat()// destino e origem
		strcat(strin1,string2);
	5) strupr() // transforma todos os caracteres em maiúsculos.
		strupr(string);
	6) strlwr() // transforma todos os caracteres em minúsculos.
		strlwr(string);
*/
int main () {
	char texto1[100], texto2[100], texto3[100];
	int tamanho, i, semEsp, alfabetizoutoda;
	printf("Informe o texto 1: \n");
	scanf("%99[^\n]", texto1);
	printf("Texto 1: %s", texto1);
	printf("\nInforme o texto 2: \n");
	scanf(" %99[^\n]", texto2);
	printf("\nTexto 2: %s", texto2);
	
//	//Determinando o tamanho da string usando a função strlen()
//	tamanho = strlen(texto1); 
//	printf("\nA frase digitada tem %d caracteres", tamanho);
//	
	// determinando o tamanho da string (tamanho de caracteres) pelo laço while()
	i= 0;
	semEsp = 0;
	while(texto1[i]!= '\0')
	{
		if(texto1[i]!= ' ') {
			semEsp++;
		}
		i++;
	}
		printf("\nA frase digitada tem %d caracteres", i);
		printf("\nNumero de caracteres sem os espacos: %d", semEsp);
		
	// comparando strings 	
	alfabetizoutoda = strcmp(texto1,texto2);
	printf("\nAlfabetica: %d", alfabetizoutoda);
	printf("\nOrdem alfabetica: \n");
	if(alfabetizoutoda<0) {
		printf("%s \n %s", texto1, texto2);
	}
		else if (alfabetizoutoda >0) {
			printf("%s \n %s", texto2, texto1);
		}
	else {
		printf("\t%s \n %s", texto1, texto1);		
	}
	
	//----------------------copiando uma string----------------------
	strcpy(texto3,texto2);
	printf("\nTexto 3: %s", texto3);
	//----------------------concatenando uma string pretooooo----------------------
	strcat(texto1," ");
	strcat(texto1, texto2);
	printf("\nConcatenacao de texto1 e texto 2: %s", texto1); //as concatenações foram todas ao texto1
	return 0;
}
