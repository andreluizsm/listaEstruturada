#include <stdio.h>

int main() {
	
	int a[6],i,confirma;

	for (i = 0; i < 6; i++) {
		printf ("Digite 6 numeros pares: ");
		scanf ("%d",&a[i]);
		
		if(a[i] % 2 != 0){
			printf ("\nFoi digitado algo difirente de um numero par, tente novamente!\n\n");
			i--;
		}
	}
	
	for (i = 5; i >= 0; i--) {
		printf ("%d  ",a[i]);
	}
	
	return 0;
}

















