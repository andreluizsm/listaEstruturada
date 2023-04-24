#include <stdio.h>

int main() {
	
	float nota[15],media = 0;
	
	int i;
	for(i = 0; i < 15; i++) {
		printf("Digite 15 notas: ");
		scanf("%f",&nota[i]);
	}
	
	for(i = 0; i < 15; i++) {
		media += nota[i];
	}
	
	media /= 15;
	printf("%.2f",media);
	
	return 0;
}
