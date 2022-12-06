#include <stdio.h>
#include<string.h>

int main()
{
    int idade;
    double salario, altura;
    char genero;
    char nome[50];

    // inicialização do comendo scanf para o usuario inserir os dados
    printf("digite o valor da idade: \n");
    scanf("%d",&idade);
    printf("digite o valor do salario: \n");
    scanf("%lf",&salario);
    printf("digite o valor da altura: \n");
    scanf("%lf",&altura);
    printf("insira o nome:\n");
    scanf("%s", &nome);

    printf("idade = %d \n",idade);
    printf("salario = %.2lf \n",salario);
    printf("altura = %.2lf \n",altura);

    return 0;
}
