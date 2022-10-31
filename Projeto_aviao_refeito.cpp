
#include <stdio.h> //biclioteca //
#include <string.h> // incluí esta biblioteca o strlen //
#include <stdlib.h> // biblioteca de formataçao 
#include <locale.h> // biblioteca de acentos 
#include <math.h> // biblioteca matemática
#include <conio.h> // biblioteca de entrada e saída//
#include <time.h> // função main podendo retornar um inteiro//
#include <stdbool.h> 
#include<ctype.h> // biblioteca de maiúsculo
#include <iostream>
#include <windows.h>
#include "conio2.c" // biblioteca das cores//
int main (){
HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);
	
char nome[100], destino [100], codigo[10], confirmacao_reserva; // declarações dos caracteres //
int passagens, idade, pessoas, ida, volta, mesI, mesV, horaI, horaV, i, menu,assentos, reserva, confirmacao, cancelar, poltrona = 0, disponivel, lin, col, lugares [10] [10], ocupados; // declarações de variaveis de números inteiros//
float valorida=550, valorvolta=550, desconto, passagem; // declarações de variaveis de números reais//
bool lugaresFULL = false; // declaração de certo e errado// 
setlocale(LC_ALL, "Portuguese"); // acentuação gráfica
	
// do-while é uma estrutura de repetição, repetindo o mesmo bloco para pedir as informações para várias pessoas		

do{
	printf ("\n Seja Bem-vindo ao Salumar linhas aereas ");//nome da companhia aérea//
	printf("\n Qual o seu destino?"); //entrada do destino //
	fflush(stdin);// limpeza da memória
	fgets (destino, 100, stdin); //entrada do destino //
	if (strlen(destino) <= 1){// condição para o destino caso seja invalido //
	printf ("\n Destino invalido, tente novamente.");
	}else{ // condição para o destino caso seja verdadeiro
	printf ("\n Proxima etapa.");
	}	

}while (strlen(destino) <= 1); // repetição do bloco caso não esteja verdadeira

// do-while é uma estrutura de repetição, repetindo o mesmo bloco para pedir as informações para várias pessoas	

do{  	
  		printf ("\n Digite a quantidade de passageiros para a verificação ira ao %s", destino); //entrada da quantidade pessoas //
		scanf ("%d", &assentos); //saída da quantidade de pessoas //
    	
		if (assentos <=90 || assentos >200){ // condição para a quantidade de pessoas caso seja invalido //
		printf ("O avião não suporta está quantidade de passegeiros, por favor tente novamente");
	
		}else{ // condição para a quantidade de pessoas caso seja verdadeiro
		printf ("O avião suporta está quantidade de passegeiros, pode prossegir");
		}

} while (assentos <=90 || assentos >200); // repetição do bloco caso não esteja verdadeira

  
		printf ("\n Para a próxima etapa da sua viagem");
        printf ("\n Vamos as datas e horários");

// do-while é uma estrutura de repetição, repetindo o mesmo bloco para pedir as informações para várias pessoas	
do{
    
		printf ("\n Escolha o mês de 1 a 12 para a ida da sua viagem"); //entrada dos meses //
		scanf ("%d", &mesI); //saída da quantidade de meses //
	
		switch(mesI){
		case 1:
		printf ("\n O mês escolhido para a ida da sua viagem foi Janeiro");
		break;
		case 2:
		printf ("\n O mês escolhido para a ida da sua viagem foi Feveiro");
		break;
		case 3:
		printf ("\n O mês escolhido para a ida da sua viagem foi Março");
		break;
		case 4:
		printf ("\n O mês escolhido para a ida da sua viagem foi Abril");
		break;
		case 5:
		printf ("\n O mês escolhido para a ida da  sua viagem foi Maio");
		break;
		case 6: 
		printf ("\n O mês escolhido para a ida da sua viagem foi Junho");
		break;
		case 7: 
		printf ("\n O mês escolhido para a ida da sua viagem foi Julho");
		break;
		case 8:
		printf ("\n O mês escolhido para a ida da sua viagem foi Agosto");
		break;
		case 9:
		printf ("\n O mês escolhido para a ida da  sua viagem foi Setembro");
		break;
		case 10:
		printf ("\n O mês escolhido para a ida da sua viagem foi Outubro");
		break;
		case 11:
		printf ("\n O mês escolhido para a ida da sua viagem foi Novembro");
		break;
		case 12:
		printf ("\n O mês escolhido para a ida da sua viagem foi Dezembro");
		break;
		default:
		printf ("\n Mês foi invalido, por favor escolha um mes valido ");
		break;
		}	

}while (mesI >12); // repetição do bloco caso não esteja verdadeira\\
	
// do-while é uma estrutura de repetição, repetindo o mesmo bloco para pedir as informações para várias pessoas	

do{
		printf ("\n Digite o dia da a sua ida"); //entrada dos dias // 
		scanf ("%d", &ida);  //saída dos dias //
		
		if (ida<=0){ // condição para os dias seja invalido //
		printf ("\n Invalido, tente novamente");
		
		}else{ // condição para os dias caso seja verdadeiro
		printf ("\n Proxima etapa");
		}

}while (ida<=0); // repetição do bloco caso não esteja verdadeira\\
	
// do-while é uma estrutura de repetição, repetindo o mesmo bloco para pedir as informações para várias pessoas	

do{
		printf ("\n Vamos ao horário da sua ida"); //entrada dos horário de ida //  
		scanf ("%d", &horaI); //saída do hórario de ida //		
		printf ("\n Sua viagem de ida para ás %d horas", horaI); // aprensentação o horário de ida//

}while (horaI<=0); // repetição do bloco caso não esteja verdadeira\\
	
// do-while é uma estrutura de repetição, repetindo o mesmo bloco para pedir as informações para várias pessoas		
	
	do{
	
		printf ("\n Escolha o mês de 1 a 12 para a volta da sua viagem"); //entrada dos meses //
		scanf ("%d", &mesV); //saída da quantidade de meses //
		
		switch(mesV){
		case 1:
		printf ("\n O mês escolhido para a volta da sua viagem foi Janeiro");
		break;
		case 2:
		printf ("\n O mês escolhido para a volta da sua viagem foi Feveiro");
		break;
		case 3:
		printf ("\n O mês escolhido para a volta da sua viagem foi Março");
		break;
		case 4:
		printf ("\n O mês escolhido para a volta da sua viagem foi Abril");
		break;
		case 5:
		printf ("\n O mês escolhido para a volta da sua viagem foi Maio");
		break;
		case 6: 
		printf ("\n O mês escolhido para a volta da sua viagem foi Junho");
		break;
		case 7: 
		printf ("\n O mês escolhido para a volta da sua viagem foi Julho");
		break;
		case 8:
		printf ("\n O mês escolhido para a volta da sua viagem foi Agosto");
		break;
		case 9: 
		printf ("\n O mês escolhido para a volta da sua viagem foi Setembro");
		break;
		case 10:
		printf ("\n O mês escolhido para a volta da sua viagem foi Outubro");
		break;
		case 11:
		printf ("\n O mês escolhido para a volta da sua viagem foi Novembro");
		break;
		case 12:
		printf ("\n O mês escolhido para a volta da sua viagem foi Dezembro");
		break;
		default:
		printf ("\n Mês foi invalido, por favor escolha um mes valido ");
		break;
		}	

}while (mesV >12); // repetição do bloco caso não esteja verdadeira

// do-while é uma estrutura de repetição, repetindo o mesmo bloco para pedir as informações para várias pessoas	

do{
		printf ("\n Digite o dia da sua volta"); //entrada dos dias //
		scanf ("%d", &volta); //saída dos dias //
	
		if (volta<=0){ // condição para os dias seja invalido //
		printf ("\n Invalido, tente novamente");
	
		}else{  // condição para os dias caso seja verdadeiro
		printf ("\n Proxima etapa");
		}

}while (volta<=0); // repetição do bloco caso não esteja verdadeira

// do-while é uma estrutura de repetição, repetindo o mesmo bloco para pedir as informações para várias pessoas	

do{
		printf ("Vamos ao horário da sua volta"); //entrada do horário de volta //
		scanf ("%d", &horaV); //saída do horário //		
		printf ("Sua viagem de volta para ás %d horas", horaV); // aprensentação o horário de volta//

}while (horaV <=0); // repetição do bloco caso não esteja verdadeira\\
	
	system ("pause");	
	
	// tabela com informações da reserva //
	
		printf ("\n|---------------------------------------------------------------------------------|\n");
		printf ("\n|                         INFORMAÇÕES DA RESERVA                                  |\n");
		printf ("\n|---------------------------------------------------------------------------------|\n");
		printf ("\n|       |       DATA                |         MÊS          |       HORÁRIO        |\n");
        printf ("\n|-------|---------------------------|----------------------|----------------------|\n");
	    printf ("\n| IDA   |          %d               |        %d            |        %d            |\n", ida, mesI, horaI);
        printf ("\n|-------|---------------------------|----------------------|----------------------|\n"); 
        printf ("\n| VOLTA |          %d               |        %d            |        %d            |\n", volta, mesV, horaV);
        printf ("\n|-------|---------------------------|----------------------|----------------------|\n");
        
        
	system ("pause");	
	
	// do-while é uma estrutura de repetição, repetindo o mesmo bloco para pedir as informações para várias pessoas		
	
	do{	
	
		printf("\n Quantas passagens o senhor(a) deseja: \n");
		scanf ("%d", &poltrona);
		// for é uma estrutura de repetição, repetindo o mesmo bloco para pedir as informações para várias pessoas	
		for (i=0; i<=poltrona;i++){ 
		printf ("\n Digite o numero da sua poltorna \n "); //entrada do numero da poltrona //
		scanf ("%d", &poltrona); //saída do numero da poltrona //
		printf("\n Qual seria a linha ?\n : "); //entrada do numero da linha //
        scanf("%d" , &lin); //saída do numero da linha //
        printf("\n Qual seria a coluna ?\n : "); //entrada do numero da coluna //
        scanf("%d" , &col); //saída a do numero da poltrona //
        printf("Voce tem certeza da sua reserva?(s ou n)"); // entrada da reserva//
		scanf("%s", &confirmacao_reserva); // saida reserva//
		if(confirmacao != 's' and confirmacao != 'n'){
		printf("Resposta invalida.");
    }
        // condição para os dias seja invalido //
		if(lugares[lin][col] == -1) printf("Esse e o corredor, escolha novamente \n\n");
        if(lugares[lin][col] == 1 ) printf ("Esse lugar esta ocupado , escolha outro \n\n");
        if(lugares[lin][col] == 0 )
        {
        lugares[lin][col] = 1 ;  // condição para os dias caso seja verdadeiro
        printf("Lugar marcado para seu uso\n\n") ;
        ocupados++; 
        }
        if(lugares[lin][col] > 1 || lugares[lin][col] < -1 ) printf("Voce escolheu um lugar inexistente, escolha um existente \n\n"); // condição para os dias seja invalido //
 
        if (ocupados == 32) 
        { lugaresFULL = true ;}
}
}while (poltrona == lugaresFULL );  // repetição do bloco caso não esteja verdadeira\\
	
// for é uma estrutura de repetição, repetindo o mesmo bloco para pedir as informações para várias pessoas	
	
for (i=1; i<= poltrona; i++){

		printf  ("\n Qual a idade do %dº passageiros",i); // entrada da idade do passageiro//
		scanf ("%d", &idade); // saída da idade// 
		
		if (idade>5){ // condição para os dias seja invalido //
		passagem = valorida+valorvolta;
		printf ("\n O valor das suas passagens ficou de %.2f", passagem);
	
		}else{  // condição para os dias caso seja verdadeiro// 
		printf("\n Passageiros com idade menor de 5 anos tem direito ao desconto");
		passagem = valorida+valorvolta;
		desconto = passagem * 0.5;
		printf ("\n O valor das suas passagens ficou de %.2f", desconto);
		printf ("Código do cliente"); // entrada do codigo//
		scanf ("%s", &codigo); // saida do codigo//
		} 
	}
		
		
		printf ("\n O avião tem %d assentos, quantos deles já foram reservados:\n", assentos); // entrada dos assentos reservados//
		scanf ("%d", &reserva); // saída dos assentos reservados//
		textcolor(4);
		
		printf ("\n Dos assentos reservados %d, quantos deles já  confirmaram:\n",reserva); // entreada dos assentos confirmadados//
		scanf ("%d", &confirmacao); // saída dos assentos reservados// 
		textcolor(1);
		
		printf ("\n Dos assentos  reservados %d, quantos deles foram cancelados:\n", reserva); // entrada dos assentos cancelados//
		scanf ("%d", &cancelar);	// saída dos assentos cancelados//
		
		disponivel = (reserva +confirmacao - cancelar); // soma dos assentos disponiveis//

		// tabela dos assentos// 
		
        printf ("\n|-------------------------------------------------------|\n");
		printf ("\n|                       MENU                            |\n");
		printf ("\n|---------------------------------|---------------------|\n");
		printf ("\n|            OPCÕES               |       NÚMERO        |\n");
        printf ("\n|---------------------------------|---------------------|\n");
        printf ("\n|      ASSENTOS RESERVAR          |         %d          |\n", reserva);
        printf ("\n|---------------------------------|---------------------|\n"); 
        printf ("\n|     ASSENTOS CONFIRMADOS        |         %d          |\n", confirmacao);
        printf ("\n|---------------------------------|---------------------|\n");
        printf ("\n|     ASSENTOS CANCELADOS         |         %d          |\n", cancelar);
        printf ("\n|---------------------------------|---------------------|\n");
        printf ("\n|    ASSENTOS DISPONÍVEIS         |         %d          |\n", disponivel);
        printf ("\n|---------------------------------|---------------------|\n"); 

            
	       
 
		




return (0);
}

