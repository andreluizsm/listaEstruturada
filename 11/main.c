#include <stdio.h>

int main() {
	
	int a[10],i,negativos,positivos;
	
	negativos = 0;
	positivos = 0;
	
	for(i = 0; i < 10; i++){
		printf("Digite 10 valores: ");
		scanf("%d",&a[i]);
		
		if(a[i] < 0){
			negativos++;
		} else {
			positivos += a[i];		
		}
	}

	printf("\nQuantidade de numeros negativos: %d\n\n",negativos);
	printf("Soma dos numeros positivos: %d",positivos);
	
	return 0;
}
