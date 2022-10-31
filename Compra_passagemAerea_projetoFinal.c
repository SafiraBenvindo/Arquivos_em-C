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
    char nomePassageiro[40][50], destinos[30][40],numeroAssentos[6][40],decisao,dispoAssentos[30][5][40];
    char assentoEscolhidoPorPassageiro[40][5];
    int coluna[6][40];
    bool novoDestino=true, naTomada=true;//variavel que decide se sera adicionado novo destino ou nao
    int countPassageiros = 0;//numero de passageiros
    int i, k, j;

    //primeiramente é feito um preenchimento de todos os voos e dados do voo somente pelo funcionario

    printf("preenchimento de escalas pelo funcionario: \n"); //impressao na tela para o funcionario
    printf("criacao de escalas aereas \n"); //impressao na tela para o funcionario
    while (novoDestino)
    {
        printf("Insira o destino: \n"); //impressao na tela para o funcionario dos destinos
        scanf("%s", &destinos[qntdDestinos - 1]);
        fflush(stdin);//limpar buffer de memoria



        do
        {
            printf("qual a quantidade de assentos? : \n");//impressão na tela de quantos assentos serão disponiveis no voo
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

    for(j = 0; j< qntdDestinos; j++)
    {

        for ( i=0; i< 5; i++)   //rodando a matriz , mostranto os assentos disponiveis
        {
            printf("\n");
            if (i==0) letraAssento= 'A';
            if (i==1) letraAssento= 'B';
            if (i==2) letraAssento= 'C';
            if (i==3) letraAssento= 'D';
            if (i==4) letraAssento= 'E';

            for ( k = 0; k < 40; k++)
            {
                itoa(k, numeroAssento, 10);// itoa tranforma um numero em uma string

                numeroAssentos[i][k] = k;



                dispoAssentos[j][i][k] = 'D';

            }
        }
    }
    //inicio do preenchimento feito pelo comprador da passagem aerea
    printf (" \t ====Ola, seja bem-vindo ao sistema de compras da passsagens da SALUAMAR ====\n"); //impressao na tela no usuario, cliente
    do
    {
        int opcao;
        do
        {
            //menu para escolha do usuario
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
            //incersão dos dados so passageiro
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

            //mapa de assentos
            printf("escolha seu assento \n");
            int contador = 0 ; // criação de variavel que garantira que a qunatidade de assentos mostrados é menor que o numero de assentos total do avião


            for (i =0; i< 5; i++)  //rodando a matriz , mostranto os assentos disponiveis
            {
                if (i==0) letraAssento= 'A';
                if (i==1) letraAssento= 'B';
                if (i==2) letraAssento= 'C';
                if (i==3) letraAssento= 'D';
                if (i==4) letraAssento= 'E';


                for (k = 0; k <40; k++)
                {

                    if (dispoAssentos[numeroVoo][i][k]== 'D') textcolor(2);//determinando a cor verde para disponibiblidade do asssento

                    if (dispoAssentos[numeroVoo][i][k]== 'R') textcolor(4);//determinando a cor vermelho para reserva do asssento

                    if (dispoAssentos[numeroVoo][i][k]== 'C') textcolor(1);//determinando a cor azul para confirmação do asssento

                    printf("%c%d ",letraAssento, numeroAssentos[i][k]);
                    textcolor(7);//volta a cor "normal"
                    contador ++;

                }
                printf("\n");

            }


            char assentoEscolhido[3];



            bool feedback = true ; //variavel de retorno da reserva
            bool assentoInvalido =false ; //variavel do assento
            char controle[2];
            int posicaoNum;
            do  //inicio do do while
            {
                printf("digite o numero do assento escolhidoo: \n");
                scanf("%s",&assentoEscolhido);
                fflush(stdin);
                printf("Assento escolhido: %c%c%c \n", assentoEscolhido[0],assentoEscolhido[1], assentoEscolhido[2]);

                controle[0]= assentoEscolhido[1];
                controle[1]= assentoEscolhido[2];
                posicaoNum = atoi(controle); //atoi transforma uma string em int para a comparaçao
                for (i =0; i< 5; i++)
                {


                    for (k = 0; k <40; k++)
                    {
                        if (numeroAssentos[i][k]!= assentoEscolhido[0]) // letra do assento
                        {
                            break;
                        }

                        if (numeroAssentos[i][k] == posicaoNum)  //numero do assento
                        {
                            //verificaçãp da disponibilidade de assento
                            if (dispoAssentos[numeroVoo][i][k] == 'D')   //assento disponivel
                            {
                                dispoAssentos[numeroVoo][i][k] = 'R';
                                printf("entrou");
                                feedback = true;
                                assentoInvalido = true;// assento valido
                                itoa(numeroVoo,assentoEscolhidoPorPassageiro[countPassageiros],10);
                                assentoEscolhidoPorPassageiro[countPassageiros][2]=assentoEscolhido[0];
                                assentoEscolhidoPorPassageiro[countPassageiros][3]=assentoEscolhido[1];
                                assentoEscolhidoPorPassageiro[countPassageiros][4]=assentoEscolhido[2];

                            }
                            else
                            {
                                feedback = true;


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
            printf("seu codigo de rastreio eh: %d \n",countPassageiros);

            countPassageiros++;
            break;
        }
        case 2:       // case 2 é responsavel pela confirmação da reserva
        {
            if (countPassageiros > 0)
            {
                int codigoDigitado;
                do
                {
                    printf("insira o codigo de rastreio \n");
                    scanf("%d", &codigoDigitado);
                    if (countPassageiros < codigoDigitado || codigoDigitado < 0) printf("codigoInvalido \n");
                }
                while(countPassageiros < codigoDigitado || codigoDigitado < 0);
                char numeroVooCodigo[2];
                numeroVooCodigo[0]= assentoEscolhidoPorPassageiro[codigoDigitado][0];
                numeroVooCodigo[1]= assentoEscolhidoPorPassageiro[codigoDigitado][1];
                int numeroVooSelecionado = atoi(numeroVooCodigo); // transforma uma string em inteiro
                for (i =0; i< 5; i++)
                {

                    
                    for (k = 0; k <40; k++)
                    {
                        if (numeroAssentos[i][k]!= assentoEscolhidoPorPassageiro[codigoDigitado][2]) // letra do assento
                        {
                            break;
                        }

                        if (numeroAssentos[i][k] == assentoEscolhidoPorPassageiro[codigoDigitado][3]
                                && numeroAssentos[i][k] == assentoEscolhidoPorPassageiro[codigoDigitado][4])  //numero do assento
                        {
                            //Confirmação do assento
                            dispoAssentos[numeroVooSelecionado][i][k]= 'C';
                            i = 5;
                            break;
                        }
                    }

                }
            }
            else printf("nenhum passageiro deu entrada");


            break;
        }
        case 3:         //case 3 é responsavel por cancelar a reserva
        {

            if (countPassageiros > 0)
            {
                int codigoDigitado;
                do
                {
                    printf("insira o codigo de rastreio \n");
                    scanf("%d", &codigoDigitado);
                    if (countPassageiros< codigoDigitado || codigoDigitado < 0) printf("codigoInvalido \n");
                }
                while(countPassageiros < codigoDigitado || codigoDigitado < 0);
                char numeroVooCodigo[2];
                numeroVooCodigo[0]= assentoEscolhidoPorPassageiro[codigoDigitado][0];
                numeroVooCodigo[1]= assentoEscolhidoPorPassageiro[codigoDigitado][1];
                int numeroVooSelecionado = atoi(numeroVooCodigo); // transforma uma string em inteiro
                for (i =0; i< 5; i++)
                {

                    //printf("entrou");
                    for (k = 0; k <40; k++)
                    {
                        if (numeroAssentos[i][k]!= assentoEscolhidoPorPassageiro[codigoDigitado][2]) // letra do assento
                        {
                            break;
                        }

                        if (numeroAssentos[i][k] == assentoEscolhidoPorPassageiro[codigoDigitado][3]
                                && numeroAssentos[i][k] == assentoEscolhidoPorPassageiro[codigoDigitado][4])  //numero do assento
                        {
                            //Confirmação do assento
                            dispoAssentos[numeroVooSelecionado][i][k]= 'D';
                            i = 5;
                            break;
                        }
                    }

                }
            }
            else printf("nenhum passageiro deu entrada");


            break;

        }
        case 4:     // case 4 registra o total arrecardado
        {
            int valorTotal=0;
            for (i = 0; i < countPassageiros; i++) valorTotal+= valorPorPassageiro[i];
            printf("O valor total é de: %d \n",valorTotal);


            break;
        }
        case 5:    // case 5 mostra o mapa de assento final
        {
            printf("destinos disponiveis: \n ");

            for ( i = 0; i < qntdDestinos ; i++ )  //imprime os destinos disponiveis para o usuario
            {
                printf("%d.%s\n",i + 1, &destinos[i]);


            }
            do
            {
                printf("digite o numero do voo \n");
                scanf("%d", &numeroVoo);
                if (numeroVoo<0 || numeroVoo>qntdDestinos) printf("numero invalido \n");


            }
            while(numeroVoo<0 || numeroVoo>qntdDestinos);
            numeroVoo--;
            printf("status do voo %d \n", numeroVoo);
            int contador=0;
            for (i =0; i< 5; i++)  //rodando a matriz , mostranto os assentos disponiveis
            {
                if (i==0) letraAssento= 'A';
                if (i==1) letraAssento= 'B';
                if (i==2) letraAssento= 'C';
                if (i==3) letraAssento= 'D';
                if (i==4) letraAssento= 'E';


                for (k = 0; k <40; k++)
                {

                    if (dispoAssentos[numeroVoo][i][k]== 'D') textcolor(2);//determinando a cor verde para disponibiblidade do asssento

                    if (dispoAssentos[numeroVoo][i][k]== 'R') textcolor(4);//determinando a cor vermelho para reserva do asssento

                    if (dispoAssentos[numeroVoo][i][k]== 'C') textcolor(1);//determinando a cor azul para confirmação do asssento

                    printf("%c%d ",letraAssento, numeroAssentos[i][k]);
                    textcolor(7);//volta a cor "normal"
                    contador ++;

                }
                printf("\n");

            }




            break;
            // O mapa de assentos ao inves de reservar a poltrona ele a confirma direto, um erro que não consegui corrigir...

        }
        }

    }
    while(naTomada);


}

