#include <stdio.h>

int main() {
	int a[6],i;
	
	for(i = 0; i < 6; i++){
		printf("Digite 6 valores inteiros: ");
		scanf("%d",&a[i]);
	}
	
	for(i = 0; i < 6; i++){
		printf("%d\n",a[i]);
	}
		
	return 0;
}
