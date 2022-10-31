//Nome: Vitoria Safira Fernandes Benvindo de Oliveira
//Matricula: UC21105673
//Curso: Ciencia da Computacao

#include<stdio.h>//biblioteca de entrada e saida do scanf e printf
#include<string.h>//biblioteca de comparacao de string
#include<stdlib.h>
#include<stdbool.h>//biblioteca para boleano
#include<conio.h>//biblioteca para implementação da cores
#include"conio2.c"
int main()
{
    //setlocale(LC_ALL, Portuguese);
    int numeroVoo, qntdAssentos[30], valorPassagem[30], idade[40], qntdDestinos=1, valorPorPassageiro[40]; //declaraÃ§aoo de variaveis
    char nomePassageiro[40][50], destinos[30][40],numeroAssentos[30][5][40][3] ,decisao,dispoAssentos[5][40];
    int coluna[6][40];
    bool novoDestino=true, naTomada=true;//variavel que decide se sera adicionado novo destino ou nao
    int countPassageiros = 0;//numero de passageiros
//  numeroAssentos[5][6]

    printf("preenchimento de escalas pelo funcionario: \n"); //impressao na tela para o funcionario
    printf("criacao de escalas aereas \n"); //impressao na tela para o funcionario
    while (novoDestino)
    {
        printf("Insira o destino: \n"); //impressao na tela para o funcionario
        scanf("%s", &destinos[qntdDestinos - 1]);
        fflush(stdin);//limpar buffer de memoria



        do
        {
            printf("qual a quantidade de assentos? : \n");
            scanf("%d", &qntdAssentos[qntdDestinos - 1]);
            fflush(stdin);//limpar buffer de memoria
            if (qntdAssentos[qntdDestinos- 1] < 90 || qntdAssentos[qntdDestinos- 1] > 200) printf("nossos avioes nao permitem uma quantidade menor que 90 e maior que 200 \n");
        }
        while  (qntdAssentos[qntdDestinos- 1] < 90 || qntdAssentos[qntdDestinos- 1] > 200);

        do
        {
            printf("qual e o valor da passagem? : \n");
            scanf("%d", &valorPassagem[qntdDestinos -1 ]);
            fflush(stdin);//limpar buffer de memoria
            if (valorPassagem[qntdDestinos- 1] < 0 ) printf("opcao irreal \n");
        }
        while (valorPassagem[qntdDestinos- 1] < 0 );

        do
        {
            printf("voce quer adicionar outro destino? digite 's' para sim e 'n' para nao: \n");
            scanf("%c", &decisao );
            fflush(stdin);
            if(decisao!='s' && decisao != 'n') printf("Opcao invalida \n");
        }
        while (decisao!='s' && decisao != 'n');





        if (decisao == 'n') break; //finalizaação do do while
        qntdDestinos++;
    }
    char letraAssento = 'A';
    char numeroAssento[2];
    int j;
    for(j = 0; j< qntdDestinos; j++)
    {
    	int i;
        for ( i=0; i< 5; i++)   //rodando a matriz , mostranto os assentos disponiveis
        { printf("\n");
            if (i==0) letraAssento= 'A';
            if (i==1) letraAssento= 'B';
            if (i==2) letraAssento= 'C';
            if (i==3) letraAssento= 'D';
            if (i==4) letraAssento= 'E';
            int k;
            for ( k = 0; k < 40; k++)
            {
                itoa(k, numeroAssento, 10);// itoa tranforma um numero em uma string

                coluna[i][k] = k;

                printf("%c%d ",letraAssento, coluna[i][k]);



                dispoAssentos[i][k] = 'D';
                printf(numeroAssentos[j][i][k]);

            }
        }
    }

    printf (" \t ====Ola, seja bem-vindo ao sistema de compras da passsagens da SALUAMAR ====\n"); //impressao na tela no usuario, cliente
    do
    {
        int opcao;
        do
        {
            printf("Digite o numero da opcao voce quer para prosseguir:\n");
            printf("1.Efetuar reserva \n");
            printf("2.Confirmar reserva \n");
            printf("3.Cancelar reserva \n");
            printf("4.Consultar total arrecadado \n");
            printf("5.Mostrar status dos assentos \n");
            printf("O que voce deseja?: \n");
            scanf("%d", &opcao);
            if (opcao<=0 || opcao>6) printf("opção Inválida \n");

        }
        while(opcao<=0 || opcao>6);
        switch(opcao)
        {
        case 1:
        {
            printf ("Insira seus dados a seguir!: \n");//impressao na tela no usuario, cliente


            printf("digite o nome do passageiro: \n");
            scanf("%s", &nomePassageiro[countPassageiros]);
            fflush(stdin);

            printf("Insira a idade do passageiro: \n");
            scanf("%s", &idade[countPassageiros]);
            fflush(stdin);


            while(idade[countPassageiros] < 0 && idade[countPassageiros] > 100)
            {
                scanf("%d", &idade);
                fflush(stdin);
                if(idade[countPassageiros] < 0 && idade[countPassageiros]>100) printf("valor invalido,por favor insira um numero entre 0 e 100 \n");
            }

            printf("destinos disponiveis: \n ");
            int i;
            for ( i = 0; i < qntdDestinos ; i++ )  //imprime os destinos disponiveis para o usuario
            {
                printf("%d.%s\n",i + 1, &destinos[i]);


            }



            do
            {

                printf("digte o numero do voo \n");
                scanf("%d", &numeroVoo);
                fflush(stdin);
                if (numeroVoo <= 0 || numeroVoo > qntdDestinos ) printf("solicitação inválida \n tente novamente \n");
            }
            while(numeroVoo <= 0 || numeroVoo > qntdDestinos);
            numeroVoo --; //index do voo

            printf("escolha seu assento \n");
            int contador = 0 ; // criação de variavel que garantira que a qunatidade de assentos mostrados é menor que o numero de assentos total do avião
           	int k;
           
            for (i =0; i< 5; i++)  //rodando a matriz , mostranto os assentos disponiveis
            {
                 if (i==0) letraAssento= 'A';
                 if (i==1) letraAssento= 'B';
                 if (i==2) letraAssento= 'C';
                 if (i==3) letraAssento= 'D';
                 if (i==4) letraAssento= 'E';

				
                for (k = 0; k <40; k++)
                {

                   if (dispoAssentos[i][k]== 'D') textcolor(2);//determinando a cor verde para disponibiblidade do asssento
                       
                   if (dispoAssentos[i][k]== 'R') textcolor(4);//determinando a cor vermelho para reserva do asssento
                      
                   if (dispoAssentos[i][k]== 'C') textcolor(1);//determinando a cor azul para confirmação do asssento
                      
                   printf("%c%d ",letraAssento, coluna[i][k]); textcolor(7);//volta a cor "normal"
                    contador ++;
                   // if (contador== qntdAssentos[numeroVoo])
                   // {
                      // i=5 ;
                        


                   // }
                }
                printf("\n");

            }
            //system("color 0 "); // volta a cor preta
            // printf("\033[0m");//volta a cor "normal"

            char assentoEscolhido[3];



            bool feedback = true ; //variavel de retorno da reserva
            bool assentoInvalido = true; //variavel do assento
            do  //inicio do do while
            {
                printf("digite o numero do assento escolhido: \n");
                scanf("%s",&assentoEscolhido);
                fflush(stdin);
                printf("Assento escolhido: %c%c%c \n", assentoEscolhido[0],assentoEscolhido[1], assentoEscolhido[2]);
                for (i =0; i< 5; i++)
                {
                	int k;
                    for (k = 0; k <40; k++)
                    {
                        if (numeroAssentos[numeroVoo][i][k][0]!= assentoEscolhido[0]) // letra do assento
                        {
                            break;
                        }
                        if (numeroAssentos[numeroVoo][i][k][1] == assentoEscolhido[1] && numeroAssentos[numeroVoo][i][k][2] == assentoEscolhido[2])  //numero do assento
                        {
                            //verificaçãp da disponibilidade d assento
                            if (dispoAssentos[i][k] == 'D')   //assento disponivel
                            {
                                dispoAssentos[i][k] == 'R';
                                feedback = true;
                                assentoInvalido= false;// assento valido
                                break;
                            }
                            else
                            {
                                feedback = true;
                                assentoInvalido = true;
                                break;
                            }
                        }
                    }
                    if (feedback == true) break; //quebra do laço

                }
                if (assentoInvalido)
                {
                    printf("assento invalido, tente novamente \n");
                }
            }
            while (assentoInvalido);
            printf("reserva efetuada com sucesso \n");
            valorPorPassageiro[countPassageiros]= valorPassagem[numeroVoo];
            if(idade[countPassageiros]<=5)  valorPorPassageiro[countPassageiros]= valorPassagem[numeroVoo] * 0.5 ;
            printf("valor total da compra %d \n", valorPorPassageiro[countPassageiros]);
            printf("valor da passagem %d \n", valorPassagem[numeroVoo]);

            countPassageiros++;
        break;
        }
        case 2:{
            int codigoDigitado;
            do {
        printf("insira o codigo de rastreio \n");
        scanf("%d", &codigoDigitado);
        if (countPassageiros< codigoDigitado || codigoDigitado < 1) printf("codigoInvalido \n");
        } while(countPassageiros < codigoDigitado || codigoDigitado < 1);

        break;
    }
    }

   } while(naTomada);


}


