#include <stdio.h>

int main() {
	
	int A[5], i,soma;
	
	A[0] = 1, A[1] = 0, A[2] = 5, A[3] = -2, A[4] = -5, A[5] = 7;
	
	soma = A[0] + A[1] + A[5];
	printf("%d\n\n",soma);
	
	A[4] = 100;
	
	for(i = 0; i <= 5; i++){
		printf("%d\n", A[i]);
	}
	
	return 0;
}
