#include <stdio.h>

int main() {
	int a[10],i,maior,menor;
	
	for(i = 0; i <= 9; i++) {
		scanf("%d",&a[i]);
	}
	
	maior = a[0], menor = a[0];
	
	for(i = 0; i <= 9; i++) {
	
	if (a[i] < menor) {
			
			menor = a[i];
		} 
		
		if (a[i] > maior) {
			
			maior = a[i];
		}		
	}

	printf("\n%d\n\n%d", maior, menor);	
	
	return 0;
}

