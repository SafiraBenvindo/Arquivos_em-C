
#include <stdio.h> //biclioteca //
#include <string.h> // inclu� esta biblioteca o strlen //
#include <stdlib.h> // biblioteca de formata�ao 
#include <locale.h> // biblioteca de acentos 
#include <math.h> // biblioteca matem�tica
#include <conio.h> // biblioteca de entrada e sa�da//
#include <time.h> // fun��o main podendo retornar um inteiro//
#include <stdbool.h> 
#include<ctype.h> // biblioteca de mai�sculo
#include <iostream>
#include <windows.h>
#include "conio2.c" // biblioteca das cores//
int main (){
HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);
	
char nome[100], destino [100], codigo[10], confirmacao_reserva; // declara��es dos caracteres //
int passagens, idade, pessoas, ida, volta, mesI, mesV, horaI, horaV, i, menu,assentos, reserva, confirmacao, cancelar, poltrona = 0, disponivel, lin, col, lugares [10] [10], ocupados; // declara��es de variaveis de n�meros inteiros//
float valorida=550, valorvolta=550, desconto, passagem; // declara��es de variaveis de n�meros reais//
bool lugaresFULL = false; // declara��o de certo e errado// 
setlocale(LC_ALL, "Portuguese"); // acentua��o gr�fica
	
// do-while � uma estrutura de repeti��o, repetindo o mesmo bloco para pedir as informa��es para v�rias pessoas		

do{
	printf ("\n Seja Bem-vindo ao Salumar linhas aereas ");//nome da companhia a�rea//
	printf("\n Qual o seu destino?"); //entrada do destino //
	fflush(stdin);// limpeza da mem�ria
	fgets (destino, 100, stdin); //entrada do destino //
	if (strlen(destino) <= 1){// condi��o para o destino caso seja invalido //
	printf ("\n Destino invalido, tente novamente.");
	}else{ // condi��o para o destino caso seja verdadeiro
	printf ("\n Proxima etapa.");
	}	

}while (strlen(destino) <= 1); // repeti��o do bloco caso n�o esteja verdadeira

// do-while � uma estrutura de repeti��o, repetindo o mesmo bloco para pedir as informa��es para v�rias pessoas	

do{  	
  		printf ("\n Digite a quantidade de passageiros para a verifica��o ira ao %s", destino); //entrada da quantidade pessoas //
		scanf ("%d", &assentos); //sa�da da quantidade de pessoas //
    	
		if (assentos <=90 || assentos >200){ // condi��o para a quantidade de pessoas caso seja invalido //
		printf ("O avi�o n�o suporta est� quantidade de passegeiros, por favor tente novamente");
	
		}else{ // condi��o para a quantidade de pessoas caso seja verdadeiro
		printf ("O avi�o suporta est� quantidade de passegeiros, pode prossegir");
		}

} while (assentos <=90 || assentos >200); // repeti��o do bloco caso n�o esteja verdadeira

  
		printf ("\n Para a pr�xima etapa da sua viagem");
        printf ("\n Vamos as datas e hor�rios");

// do-while � uma estrutura de repeti��o, repetindo o mesmo bloco para pedir as informa��es para v�rias pessoas	
do{
    
		printf ("\n Escolha o m�s de 1 a 12 para a ida da sua viagem"); //entrada dos meses //
		scanf ("%d", &mesI); //sa�da da quantidade de meses //
	
		switch(mesI){
		case 1:
		printf ("\n O m�s escolhido para a ida da sua viagem foi Janeiro");
		break;
		case 2:
		printf ("\n O m�s escolhido para a ida da sua viagem foi Feveiro");
		break;
		case 3:
		printf ("\n O m�s escolhido para a ida da sua viagem foi Mar�o");
		break;
		case 4:
		printf ("\n O m�s escolhido para a ida da sua viagem foi Abril");
		break;
		case 5:
		printf ("\n O m�s escolhido para a ida da  sua viagem foi Maio");
		break;
		case 6: 
		printf ("\n O m�s escolhido para a ida da sua viagem foi Junho");
		break;
		case 7: 
		printf ("\n O m�s escolhido para a ida da sua viagem foi Julho");
		break;
		case 8:
		printf ("\n O m�s escolhido para a ida da sua viagem foi Agosto");
		break;
		case 9:
		printf ("\n O m�s escolhido para a ida da  sua viagem foi Setembro");
		break;
		case 10:
		printf ("\n O m�s escolhido para a ida da sua viagem foi Outubro");
		break;
		case 11:
		printf ("\n O m�s escolhido para a ida da sua viagem foi Novembro");
		break;
		case 12:
		printf ("\n O m�s escolhido para a ida da sua viagem foi Dezembro");
		break;
		default:
		printf ("\n M�s foi invalido, por favor escolha um mes valido ");
		break;
		}	

}while (mesI >12); // repeti��o do bloco caso n�o esteja verdadeira\\
	
// do-while � uma estrutura de repeti��o, repetindo o mesmo bloco para pedir as informa��es para v�rias pessoas	

do{
		printf ("\n Digite o dia da a sua ida"); //entrada dos dias // 
		scanf ("%d", &ida);  //sa�da dos dias //
		
		if (ida<=0){ // condi��o para os dias seja invalido //
		printf ("\n Invalido, tente novamente");
		
		}else{ // condi��o para os dias caso seja verdadeiro
		printf ("\n Proxima etapa");
		}

}while (ida<=0); // repeti��o do bloco caso n�o esteja verdadeira\\
	
// do-while � uma estrutura de repeti��o, repetindo o mesmo bloco para pedir as informa��es para v�rias pessoas	

do{
		printf ("\n Vamos ao hor�rio da sua ida"); //entrada dos hor�rio de ida //  
		scanf ("%d", &horaI); //sa�da do h�rario de ida //		
		printf ("\n Sua viagem de ida para �s %d horas", horaI); // aprensenta��o o hor�rio de ida//

}while (horaI<=0); // repeti��o do bloco caso n�o esteja verdadeira\\
	
// do-while � uma estrutura de repeti��o, repetindo o mesmo bloco para pedir as informa��es para v�rias pessoas		
	
	do{
	
		printf ("\n Escolha o m�s de 1 a 12 para a volta da sua viagem"); //entrada dos meses //
		scanf ("%d", &mesV); //sa�da da quantidade de meses //
		
		switch(mesV){
		case 1:
		printf ("\n O m�s escolhido para a volta da sua viagem foi Janeiro");
		break;
		case 2:
		printf ("\n O m�s escolhido para a volta da sua viagem foi Feveiro");
		break;
		case 3:
		printf ("\n O m�s escolhido para a volta da sua viagem foi Mar�o");
		break;
		case 4:
		printf ("\n O m�s escolhido para a volta da sua viagem foi Abril");
		break;
		case 5:
		printf ("\n O m�s escolhido para a volta da sua viagem foi Maio");
		break;
		case 6: 
		printf ("\n O m�s escolhido para a volta da sua viagem foi Junho");
		break;
		case 7: 
		printf ("\n O m�s escolhido para a volta da sua viagem foi Julho");
		break;
		case 8:
		printf ("\n O m�s escolhido para a volta da sua viagem foi Agosto");
		break;
		case 9: 
		printf ("\n O m�s escolhido para a volta da sua viagem foi Setembro");
		break;
		case 10:
		printf ("\n O m�s escolhido para a volta da sua viagem foi Outubro");
		break;
		case 11:
		printf ("\n O m�s escolhido para a volta da sua viagem foi Novembro");
		break;
		case 12:
		printf ("\n O m�s escolhido para a volta da sua viagem foi Dezembro");
		break;
		default:
		printf ("\n M�s foi invalido, por favor escolha um mes valido ");
		break;
		}	

}while (mesV >12); // repeti��o do bloco caso n�o esteja verdadeira

// do-while � uma estrutura de repeti��o, repetindo o mesmo bloco para pedir as informa��es para v�rias pessoas	

do{
		printf ("\n Digite o dia da sua volta"); //entrada dos dias //
		scanf ("%d", &volta); //sa�da dos dias //
	
		if (volta<=0){ // condi��o para os dias seja invalido //
		printf ("\n Invalido, tente novamente");
	
		}else{  // condi��o para os dias caso seja verdadeiro
		printf ("\n Proxima etapa");
		}

}while (volta<=0); // repeti��o do bloco caso n�o esteja verdadeira

// do-while � uma estrutura de repeti��o, repetindo o mesmo bloco para pedir as informa��es para v�rias pessoas	

do{
		printf ("Vamos ao hor�rio da sua volta"); //entrada do hor�rio de volta //
		scanf ("%d", &horaV); //sa�da do hor�rio //		
		printf ("Sua viagem de volta para �s %d horas", horaV); // aprensenta��o o hor�rio de volta//

}while (horaV <=0); // repeti��o do bloco caso n�o esteja verdadeira\\
	
	system ("pause");	
	
	// tabela com informa��es da reserva //
	
		printf ("\n|---------------------------------------------------------------------------------|\n");
		printf ("\n|                         INFORMA��ES DA RESERVA                                  |\n");
		printf ("\n|---------------------------------------------------------------------------------|\n");
		printf ("\n|       |       DATA                |         M�S          |       HOR�RIO        |\n");
        printf ("\n|-------|---------------------------|----------------------|----------------------|\n");
	    printf ("\n| IDA   |          %d               |        %d            |        %d            |\n", ida, mesI, horaI);
        printf ("\n|-------|---------------------------|----------------------|----------------------|\n"); 
        printf ("\n| VOLTA |          %d               |        %d            |        %d            |\n", volta, mesV, horaV);
        printf ("\n|-------|---------------------------|----------------------|----------------------|\n");
        
        
	system ("pause");	
	
	// do-while � uma estrutura de repeti��o, repetindo o mesmo bloco para pedir as informa��es para v�rias pessoas		
	
	do{	
	
		printf("\n Quantas passagens o senhor(a) deseja: \n");
		scanf ("%d", &poltrona);
		// for � uma estrutura de repeti��o, repetindo o mesmo bloco para pedir as informa��es para v�rias pessoas	
		for (i=0; i<=poltrona;i++){ 
		printf ("\n Digite o numero da sua poltorna \n "); //entrada do numero da poltrona //
		scanf ("%d", &poltrona); //sa�da do numero da poltrona //
		printf("\n Qual seria a linha ?\n : "); //entrada do numero da linha //
        scanf("%d" , &lin); //sa�da do numero da linha //
        printf("\n Qual seria a coluna ?\n : "); //entrada do numero da coluna //
        scanf("%d" , &col); //sa�da a do numero da poltrona //
        printf("Voce tem certeza da sua reserva?(s ou n)"); // entrada da reserva//
		scanf("%s", &confirmacao_reserva); // saida reserva//
		if(confirmacao != 's' and confirmacao != 'n'){
		printf("Resposta invalida.");
    }
        // condi��o para os dias seja invalido //
		if(lugares[lin][col] == -1) printf("Esse e o corredor, escolha novamente \n\n");
        if(lugares[lin][col] == 1 ) printf ("Esse lugar esta ocupado , escolha outro \n\n");
        if(lugares[lin][col] == 0 )
        {
        lugares[lin][col] = 1 ;  // condi��o para os dias caso seja verdadeiro
        printf("Lugar marcado para seu uso\n\n") ;
        ocupados++; 
        }
        if(lugares[lin][col] > 1 || lugares[lin][col] < -1 ) printf("Voce escolheu um lugar inexistente, escolha um existente \n\n"); // condi��o para os dias seja invalido //
 
        if (ocupados == 32) 
        { lugaresFULL = true ;}
}
}while (poltrona == lugaresFULL );  // repeti��o do bloco caso n�o esteja verdadeira\\
	
// for � uma estrutura de repeti��o, repetindo o mesmo bloco para pedir as informa��es para v�rias pessoas	
	
for (i=1; i<= poltrona; i++){

		printf  ("\n Qual a idade do %d� passageiros",i); // entrada da idade do passageiro//
		scanf ("%d", &idade); // sa�da da idade// 
		
		if (idade>5){ // condi��o para os dias seja invalido //
		passagem = valorida+valorvolta;
		printf ("\n O valor das suas passagens ficou de %.2f", passagem);
	
		}else{  // condi��o para os dias caso seja verdadeiro// 
		printf("\n Passageiros com idade menor de 5 anos tem direito ao desconto");
		passagem = valorida+valorvolta;
		desconto = passagem * 0.5;
		printf ("\n O valor das suas passagens ficou de %.2f", desconto);
		printf ("C�digo do cliente"); // entrada do codigo//
		scanf ("%s", &codigo); // saida do codigo//
		} 
	}
		
		
		printf ("\n O avi�o tem %d assentos, quantos deles j� foram reservados:\n", assentos); // entrada dos assentos reservados//
		scanf ("%d", &reserva); // sa�da dos assentos reservados//
		textcolor(4);
		
		printf ("\n Dos assentos reservados %d, quantos deles j�  confirmaram:\n",reserva); // entreada dos assentos confirmadados//
		scanf ("%d", &confirmacao); // sa�da dos assentos reservados// 
		textcolor(1);
		
		printf ("\n Dos assentos  reservados %d, quantos deles foram cancelados:\n", reserva); // entrada dos assentos cancelados//
		scanf ("%d", &cancelar);	// sa�da dos assentos cancelados//
		
		disponivel = (reserva +confirmacao - cancelar); // soma dos assentos disponiveis//

		// tabela dos assentos// 
		
        printf ("\n|-------------------------------------------------------|\n");
		printf ("\n|                       MENU                            |\n");
		printf ("\n|---------------------------------|---------------------|\n");
		printf ("\n|            OPC�ES               |       N�MERO        |\n");
        printf ("\n|---------------------------------|---------------------|\n");
        printf ("\n|      ASSENTOS RESERVAR          |         %d          |\n", reserva);
        printf ("\n|---------------------------------|---------------------|\n"); 
        printf ("\n|     ASSENTOS CONFIRMADOS        |         %d          |\n", confirmacao);
        printf ("\n|---------------------------------|---------------------|\n");
        printf ("\n|     ASSENTOS CANCELADOS         |         %d          |\n", cancelar);
        printf ("\n|---------------------------------|---------------------|\n");
        printf ("\n|    ASSENTOS DISPON�VEIS         |         %d          |\n", disponivel);
        printf ("\n|---------------------------------|---------------------|\n"); 

            
	       
 
		




return (0);
}

