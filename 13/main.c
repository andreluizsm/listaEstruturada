#include <stdio.h>

int main() {
	int a[5],i,maior,menor,media;
	
	for (i = 0; i < 5; i++){
		printf("Digite 5 numeros: ");
		scanf("%d",&a[i]);
	}
	
	maior = 0;
	menor = 0;
	
	for (i = 0; i < 5; i++) {
		if (a[i] > a[maior]) {
			maior = i;
		}
		if (a[i] < a[menor]) {
			menor = i;
		}
	}
	
	printf("\nA posicao do maior numero e: %d\n",maior);
	printf("\nA posicao do menor numero e: %d\n",menor);
	
	return 0;
}
