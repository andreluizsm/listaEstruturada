#include <stdio.h>

int main() {
	
	int a[8],i,x,y,soma;
	
	for(i = 0; i < 8; i++){
		scanf("%d",&a[i]);
	}
	
	system("cls");
	
	printf("Digite a posicao de 0 a 7");
	scanf("%d%d",&x,&y);
	
	soma = a[x] + a[y];
	printf("%d",soma);
	
	return 0;
}
