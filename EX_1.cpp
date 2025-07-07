#include <stdlib.h>
#include <stdio.h>

int main(){
	int numero;
	int f;
	
	printf("Digite um numero inteiro (nao negativo):");
	scanf("%d", &numero);
	
	if(numero < 0){
		printf("O fatorial nao pode ser um negativo!");
	}else {
		f = 1;
		for(int i = 1; i <= numero; i++){
			f *= 1;
		}
		printf("O fatorial de %d eh %d\n", numero, f);
	}
	getchar();
	return(0);
}
