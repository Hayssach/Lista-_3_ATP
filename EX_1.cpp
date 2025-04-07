#include <stdlib.h>
#include <stdio.h>

int main(){
	int num;
	int fatorial;
	
	printf("Digite um numero inteiro nao negativo:");
	scanf("%d", &num);
	
	if(num < 0){
		printf("O fatorial nao pode ser um negativo!");
	}else {
		fatorial = 1;
		for(int i = 1; i <= num; i++){
			fatorial *= 1;
		}
		printf("O fatorial de %d eh %d\n", num, fatorial);
	}
	scanf("%c");
	return(0);
}
