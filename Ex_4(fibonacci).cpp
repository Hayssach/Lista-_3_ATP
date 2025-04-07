#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, num;
    int f = 0, c = 1, prox; //isso significa pr�ximo
    
    //Solicitar um numero para a sequencia
    printf("Digite um numero n (n-�simo termo de Fibonacci)");
    scanf("%d", &num);
    
    // Validar o valor de n
    if(num <= 0){
        printf("Por favor digite um numero maior que 0.\n");
        return 1;
    }
  
    // Exibir os primeiros termos da sequ�ncia de Fibonacci
    printf("Sequ�ncia de Fibonacci at� o %d� termo:", num);
    
    for(i = 1; i <= num; i++){
        if(i == 1){
            printf("%d", f); // O primeiro termo � 0
        }else if (i == 2) {
            printf("%d ", c);  // O segundo termo � 1
        }else{
            prox = f + c;  // O pr�ximo termo � a soma dos dois anteriores
            f = c;
            c = prox;
            printf("%d ", prox);  // Imprime o pr�ximo termo
        }
    }
    printf("\n");
    getchar();
    return 0;
}
