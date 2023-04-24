#include <stdio.h>

int main() {
	
	int a[5],i,maior,menor,media;
	
	for (i = 0; i < 5; i++){
		printf("Digite 5 numeros: ");
		scanf("%d",&a[i]);
		media += a[i];
	}
	
	maior = a[0];
	menor = a[0];
	
	for (i = 0; i < 5; i++){
		if (a[i] > maior){
			maior = a[i];
		}
		if (a[i] < menor){
			menor = a[i];
		}
	}

	printf("\nO maior numero e: %d\n",maior);
	printf("\nO menor numero e: %d\n",menor);
	printf("\nA media e: %d",media/5);
	
	
	
	 
	return 0;
}
