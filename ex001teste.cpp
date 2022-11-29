#include <stdio.h>

int main () {

int mat[3][4;
int soma[3];

 for(int i=0;i<=2;i++) {
  for(int j=0;j<=2;j++) {
  printf("Insira um valor na linha %d, na coluna %d: ", i, j);	
  scanf("%d", &mat[i][j]);
 }
}
printf("\nITEM A) \n");
	for(int i=0; i<=2;i++) { 
	 for(int j=0;j<=2;j++) {
	  printf("\na matriz na linha %d na coluna %d foi: %d", i, j, mat[i][j]);	
	 }
	}
printf("\n ITEM B)\n");
	for(int i=0; i<=2; i++) {
		for(int j=0; j<=2; j++){
		 soma[i] = soma[i]+mat[i][j];
		 printf("soma: %d", soma[i]);	
	}
}
for(int i=0; i<=2; i++) {
	printf("\na soma dos elementos da linha %d foi: %d", i, soma[i]);	
}
//printf("\nITEM C:\n");

return 0;
}
