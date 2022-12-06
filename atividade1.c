#include <stdio.h>
#include<string.h>

int main() {
    int idade;
    double salario, altura;
    char genero;
    char nome[50];

    idade = 20;
    salario= 58000.5;
    altura = 1.71;
    genero = 'F';
    strcpy (nome, "Safira Benvindo");

    printf(" A mulher %s, do sexo %c, ganha %.2lf reais e tem %d anos \n", nome, genero, salario, idade);

   // printf("idade = %d \n",idade);
   // printf("salario = %.2lf \n",salario);
    //printf("altura = %.2lf \n",altura);
    //printf("genero = %\c \n ",genero);
    //printf("nome = %\s \n ",nome);

    return 0;
}
