#include<stdio.h>
#include<stdlib.h>

int main(){
    int x, soma;

    // estrutura de repetição ENQUANTO
    soma=0;
    printf("digite o primeiro numero: \n");
    sacnf("%d", &x);

    while (x!= 0){  //Inicio do loop
        soma= soma+x; // valor a soma não pode ser igual ao valor inicial
        printf("digite outro numero \n"); // o algoritimo não reconheceu o numero como valido
        sacnf("%d", &x);
    }
    printf("soma: %d\n", soma);// caso saia do laço de repetição cai nessa segunda estrutura

    return 0;
}
