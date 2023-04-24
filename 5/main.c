#include <stdio.h>

int main() {
	int a[10],i,par[10];
	
	for( i = 0; i < 10; i++) {
		scanf("%d",&a[i]);
	}
	
	for(i = 0; i < 10; i++) {
		if (a[i] % 2 == 0) {
			par[i] = a[i];
		}else{
			par[i] = 0;
		}
	}
	
	for(i = 0; i < 10; i++) {
		if (par[i] != 0) {
			printf("\n%d\n", par[i]);
		}
	}
	
	return 0;
}
