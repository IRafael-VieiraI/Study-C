#include <stdio.h>
#include <locale.h> //necess�rio para usar setlocale
/*
"" = string
'' = 1 char/caracter
Estrutura Switch - case (s� funciona com numeros inteiros e chars):
	estrutura: 
	switch(var) onde var � um n�mero inteiro.
	{
	case 1:
			a��o
			break//para parar de rodar o caso.);
	case 2: 
			a��o
			break;
	default:
			a��o;
}
se var = case 1 (faz a a��o da case 1) 
se var = case 2 (faz a a��o da case 2)
switch(var) = if
cases = "else if"
default = else

switch (var) onde vari�vel � um char (caractere)
{ 

	case 'a':
		a��o
		break
	case 'b':
		a��o
		break
	default:
		a��o

}
*/
int main () {
	setlocale(LC_ALL, "Portuguese");
	int dia;
	
	printf("Selecione o dia da semana: \n");
	printf("\t 1 - Domingo \n\t 2 - segunda");
	printf("\n\t 3 - Ter�a \n\t 4 - Quarta \n\t 5 - Quinta");
	printf("\n\t 5 - Sexta \n\t 6 - Sab�do \n\t 7 - Domingo");
	// requerindo o dia desejado
	printf("\nInforme o dia da semana desejado: ");
	scanf("%d",&dia);
	switch (dia) {
			case 1:
	printf("\n\tO dia escolhido foi DOMINGO");
	break;
	case 2:
	printf("\n\tO dia escolhido foi SEGUNDA");	
	break;
	case 3:
	printf("\n\tO dia escolhido foi TER�A");		
	break;	
	case 4:
	printf("\n\tO dia escolhido foi QUARTA");		
	break;
	case 5:
	printf("\n\tO dia escolhido foi QUINTA");		
	break;
	case 6:
	printf("\n\tO dia escolhido foi SEXTA");		
	break;
	case 7:
	printf("\n\tO dia escolhido foi S�BADO");		
	break;
   default :
    printf ("Valor invalido!\n");
  }
	switch (dia) {
	case 1:
	case 7:
			printf("\n\t Final de Semana!!!");
			break;
	case 2 ... 6:
			printf ("Meio de semana");
			break;
	}

	return 0;
	
}

