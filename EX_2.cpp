#include <stdlib.h>
#include <stdio.h>

int main(){
int num, i, ehPrimo = 1; // 1 assume que é primo

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if (num <= 1) {
        ehPrimo = 0;
    } else {
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                ehPrimo = 0;
                break;
            }
        }
    }

    if (ehPrimo)
        printf("%d é um número primo.\n", num);
    else
        printf("%d não é um número primo.\n", num);
	getchar();
	return(0);
}
