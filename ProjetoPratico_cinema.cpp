//Nome: Vit�ria Safira Fernandes Benvindo de Oliveira
//Matricula: UC21105673
//Curso: Ci�ncia da Computa��o

#include<stdio.h>//biblioteca de entrada e sa�da do scanf e printf
#include<string.h>//biblioteca de compara�ao de string
#include <iostream>//biblioteca que permite acesso ao system liberando a possibilidade de limar a tela
int main(){ //inicio da fun��o main 
	int sessao, criancas = 0, adolescentes = 0, adultos = 0, idosos = 0, qntdPessoas = 0, homens = 0, mulheres = 0;//declara��o de variaveis
	int pipocas = -1, pipocasPedidas = 0;
	int homensMaiores = 0, mulheresMaiores = 0; 
	char filme[1000] = "vazio"; //declara�ao de variaveis tipo caracter 
	char sexo = 'v';// v corresponde a vazio
	int idade;
/*o conceito de livro codigo limpro usado foi na declara��o das variaveis,onde diz qie os nomes s�o importantes e � 
usado um padra onde a primeira letra donome � minusculo e o inicio do segundo nome � iniciado com a letra maiuscula.
usado para identificar e deixar claro cada variavel */
	
	
	printf("Bem-vindo a interacao como usuario do cine brasilia\n");//impress�o na tela do usuario
	
	//condi�ao para numero de sessoes
	while(sessao != 2){ // loop responsavel pela quantidade valida��o do numero de sess�es 
		printf("qual a quantidade de sessoes?\n");//impress�o na tela do usuario
		scanf("%d", &sessao);//codigo de formata��o
		fflush(stdin);//limpar buffer de memoria
    	if (sessao != 2) printf("quantidade nao aceita!\n"); //valida��o
	}
	
  	//identifica�ao do filme
  	//objetivo de strcmp � coparar strings se for igual ele retorna 0 se for diferente ele retorna um numero diferente de 0
  	//o objetivo do ! � inverter o retorno de strcmp, tornando possivel a entrada no la�o
    while(!strcmp(filme,"vazio")){ // verificando se o primeiro caracter de filme esta vazio
        printf("qual o nome do filme?\n");
		fgets(filme,1000, stdin);//limpar buffer de memoria
        if (!strcmp(filme,"vazio")) printf("nome nao identificado!Escreva algo \n"); //valica�ao da condi�ao while    
    }
    
    
    //quantidade de pessoas por sessao, nao podendo ser inferior a 10
    while(qntdPessoas < 10){
      	printf("qual a quantidade de pessoas na sessao?\n");
      	scanf("%d", &qntdPessoas);
      	fflush(stdin);//limpar buffer de memoria
      	if (qntdPessoas<10)  printf("nao eh aceito uma quantidade inferior a 10 \n");//caso a quantidade for inferior 
		//a 10 entrar no la�o ate uma quantidade valida
 	}
 	
 	
 	//declara��o do sexo sendo F (feminino)e M (masculino) e idade dos usuarios
 	for(int i = 0; i < qntdPessoas; i++){ //contador
 		fflush(stdin);
 		printf("dados da pessoa numero %d \n",i+1);//i+1 corresponde ao numero da pessoa
 		printf("sexo: ");
 		while (sexo != 'M' and sexo != 'F'){ 
			scanf("%c", &sexo);
			fflush(stdin);
			if (sexo != 'M' and sexo != 'F')	printf("valor invalido,por favor escolha F ou M \n");//caso o usuario insira um valor
			//diferente de F ou M entrar no la�o ate ser inserido um valor valido
		
		}
		
		//separa��o das pessoas pelo sexo
		if (sexo == 'M') homens++; //contador do numero de homens
		if(sexo == 'F')  mulheres++; //contadpr do numero de mulheres
 	
	 	printf("\n"); //pular linha
 		
 		printf("idade: ");
 		while(idade < 3 or idade > 100){
 			scanf("%d", &idade);
 			fflush(stdin);
 			if(idade < 3 or idade>100) printf("valor invalido,por favor insira um numero entre 3 e 100 \n");
 			
		 }
		 printf("\n"); //pular linha
		 
		 
		if(idade >= 3 and idade <= 13) criancas++; //contador da quantidade de crianca 
	 	if(idade >= 14 and idade <= 17) adolescentes++;//contador da quantidade de adolescentes 
	 	if(idade >= 18 and idade <= 64) adultos++;//contador da quantidade de adultos
	 	if(idade >= 65 and idade <= 100) idosos++;//contador da quantidade de idosos
	    
	    if (idade>= 18 and sexo == 'M') homensMaiores++;// homens maiores de idade
	    if (idade>= 18 and sexo == 'F') mulheresMaiores++;// mulheres maiores de idade
	    while (pipocas < 0 or  pipocas > qntdPessoas){
	    	printf("vai quantas pipoquinhas? \n");
	    	scanf("%d",&pipocas);
	    	fflush(stdin);
	    	if (pipocas < 0 or pipocas > qntdPessoas) 	printf("escolha um numero realista \n");
	    	
	    }
	    pipocasPedidas = pipocas + pipocasPedidas; //contador de pipoca
		
		idade = 0; //limpando as variaveis para entrar no la�o de novo
	    sexo = 'v';
	    pipocas= -1;
	    
 	}
 	system("cls");// vai lipar a tela e imprimir as proximas etapas em uma tela limpa 
 	printf("o filme assistido foi %s, com uma audiencia composta de %d mulheres e %d homens \n \n", filme, mulheres, homens);
 	printf("quantidade de pessoas por classificacao indicativa: \n");
 	printf("%d criancas \n",criancas);
 	printf("%d adolescente \n",adolescentes);
	printf("%d adulto \n",adultos);
	printf("%d idoso \n",idosos);
	printf("\n");
	printf("estiveram presentes %d mulheres e %d homens maiores de 18 anos e foram pedidas %d pipocas \n"
	, mulheresMaiores
	, homensMaiores
	, pipocasPedidas);
	printf("obrigada por comparecer ao cine brasilia,volte sempre!");


	
	//system("cls"); //limpar a tela de um computador windonws
    //system("clear") para linux
	return 0;
}
	
