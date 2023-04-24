#include <stdio.h>

int main() {
	
	int a[6],i;
	
	printf("Digite 6 valores: ");
	
	for (i = 0; i < 6; i++){
		scanf("%d",&a[i]);
	}
	
	printf("\nOrdem inversa: ");
	
	for(i = 5; i >= 0; i--){
		printf("%d ",a[i]);
	}
	
	return 0;
}
