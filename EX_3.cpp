#include <stdlib.h>
#include <stdio.h>

int main(){
	int opcao, num1, num2;
	 
	 do {
    printf("\nCalculadora Simples\n");
    printf("1. Soma\n");
    printf("2. Subtracao\n");
    printf("3. Multiplicacao\n");
    printf("4. Divisao\n");
    printf("5. Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    if (opcao >= 1 && opcao <= 4) {
        printf("Digite dois numeros inteiros: ");
        scanf("%d %d", &num1, &num2);
    }

    if (opcao == 1) {
        printf("Resultado: %d\n", num1 + num2);
    } else if (opcao == 2) {
        printf("Resultado: %d\n", num1 - num2);
    } else if (opcao == 3) {
        printf("Resultado: %d\n", num1 * num2);
    } else if (opcao == 4) {
        if (num2 != 0)
            printf("Resultado: %d\n", num1 / num2);
        else
            printf("Erro: Divisao por zero!\n");
    } else if (opcao == 5) {
        printf("Saindo...\n");
    } else {
        printf("Opcao invalida! Tente novamente.\n");
    }
} while (opcao != 5);
   
   return(0);
}
