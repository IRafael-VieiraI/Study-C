#include <stdio.h>
#include <locale.h> //necessário para usar setlocale
// %.2f = para você colocar em duas casas decimais o $.2(declaração, nesse caso é float então f).
int main () 
{
	setlocale(LC_ALL, "Portuguese");
	float valorCompra, valFinal, desc;
	int formaPag;
	printf("\n---------------------- MENU ----------------------");
	printf("\n\tInsira o valor da compra: ");
	scanf("%f",&valorCompra);
	printf("\n\t Insira a forma de pagamento:");
	printf("\n---------------------------------------------------");
	printf("\n\t 1  -  A vista (voce1 tem 10%% de desconto.)");
	printf("\n\t 2  -  2 vezes Parcelado  (sem juros)");
	printf("\n\t 3  -  3 vezes Parcelado  (sem juros)");
	printf("\n\t 4  -  4 vezes Parcelado  (sem juros)");
	printf("\n\t 5  -  5 vezes Parcelado  (com 10%% de juros)");
	printf("\n\t 6  -  6 vezes Parcelado  (com 10%% de juros)");
	printf("\n\t 7  -  7 vezes Parcelado  (com 10%% de juros)");
	printf("\n\t 8  -  8 vezes Parcelado  (com 15%% de juros)");
	printf("\n\t 9  -  9 vezes Parcelado  (com 15%% de juros)");
	printf("\n\t 10 - 10 vezes Parcelado  (com 15%% de juros)");
	printf("\n\t 11 - 11 vezes Parcelado  (com 25%% de juros)");
	printf("\n\t 12 - 12 vezes Parcelado  (com 25%% de juros)");
	printf("\n\n---------------------------------------------------");
	printf("\n\n\t A Forma inserida foi: ");
	scanf("%d", &formaPag);
	switch (formaPag) {
	case 1:
	desc = (valorCompra - (valorCompra * 0.10));		
	printf("\n\tO Valor da sua compra é: R$%.2f.", desc);
	break;
	case 2 ... 4:		
	printf("\n\tO Valor da sua compra é: R$%.2f.", valorCompra);
	break;
	case 5 ... 7:
	valFinal = (valorCompra + (valorCompra * 0.10));		
	printf("\n\tO Valor da sua compra é: R$%.2f.", valFinal);		
	break;	
	case 8 ... 10:
	valFinal = (valorCompra + (valorCompra * 0.15));		
	printf("\n\tO Valor da sua compra é: R$%.2f.", valFinal);			
	break;
	case 11 ... 12:
	valFinal = (valorCompra + (valorCompra * 0.25));		
	printf("\n\tO Valor da sua compra é: R$%.2f.", valFinal);			
	break;
   default :
    printf ("Valor invalido!\n");
  }	
	
	
	
	printf("\n\n\tpressione qualquer tecla para fechar.");
	getchar ();
	getchar ();
	return 0;
}
