#include <stdio.h>

int main() {
	
	int a[10],i,maior,posicao;
	
	for(i = 0; i <= 9; i++){
		printf("Escreva 10 valores: ");
		scanf("%d",&a[i]);
	}

	maior = a[0];
	posicao = 0;
	
	for(i = 0; i <= 9; i++){
		if (a[i] > maior){
			maior = a[i];
			posicao = i;
		}
	}	

	printf("\n\nVetor: ");
	for(i = 0; i <= 9; i++){
		printf("%d",a[i]);
	}
	printf("\n\nMaior: %d",maior);
	printf("\n\nPosicao: a[%d]",posicao);
	
	return 0;
}
