#include <stdlib.h>
#include <stdio.h>

int main(){
int numero, j, ehPrimo = 1; // 1 assume que é primo

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero <= 1) {
        ehPrimo = 0;
    } else {
        for (j = 2; j * j <= numero; j++) {
            if (num % j == 0) {
                ehPrimo = 0;
                break;
            }
        }
    }

    if (ehPrimo)
        printf("%d é um número primo.\n", numero);
    else
        printf("%d não é um número primo.\n", numero);
	getchar();
	return(0);
}
