#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#define TAMANHO 50

struct pilote 
    {
        int codVerificacao, idade, id;
        char nome[TAMANHO], sexo, paisOrigem[TAMANHO], equipe[TAMANHO];
    };

struct circut{
    float menor_tempo;
    int cod, distancia, minutos, segundos, milisegundos;
    char pista[TAMANHO], pais[TAMANHO];
};

struct date
{
    int dia, mes, ano;
};

typedef struct database data;
    struct database{
        struct pilote piloto;
        struct circut circuito;
        struct date data;
        data *proxPointer;
    }*dados;

//cadastro das informacoes gerais
data* cadastro(data* dados);
//dados piloto
void le_valida_nome(data* informacoes);
void le_valida_idade(data* informacoes);
void le_valida_local_piloto(data* informacoes);
void le_valida_ID(data* informacoes);
void le_valida_sexo(data* informacoes);
void le_valida_equipe(data* informacoes);
//dados circuito
void le_valida_pista(data* informacoes);
void le_valida_local(data* informacoes);
void le_valida_distancia(data* informacoes);
void le_valida_tempo(data* informacoes);
void le_gera_cod(data* informacoes);
//guardando data para posterior validacao
void le_valida_data_circuito(data* informacoes);
//funcionalidades 
void imprimir_infos(data* dados);
void buscar_nome(data* dados);
void melhor_voltar(data* dados);
void buscar_tempo(data* dados);
void buscar_cod_circuito(data* dados);


int main(void)
{
    int opcao;
    dados = NULL;
    data *liberarMemo, *aux;
    printf("Digite sua opcao: ");
    do{
        scanf("%i", &opcao);
        system("cls");
        switch(opcao)
        {
        case 1:
            dados = cadastro(dados);
            
            break;
        case 2:
            printf("olaa");
            break;
        case 3://saindo e limpando memoria
            while (dados!=NULL)
            {
                liberarMemo = dados;
                dados = dados->proxPointer;
                free(liberarMemo);
            }
            exit(1);
            break;
            
        default:printf("OPCAO DESEJADA INVALIDA, POR FAVOR DIGITE UMA OPCAO DE ACORDO COM O MENU!\n");

            break;
        }
    } while (opcao != 3);
    
    return 0;
}


data* cadastro(data* dados){
    fflush(stdin);
    data* informacoes = (data*)malloc(sizeof(dados));
    if (informacoes == NULL)
    {
        printf("[ESPACO NA MEMORIA INSUFICIENTE]\n");
        system("Pause");
        exit(1);
    }
    //cadastro do piloto
    le_valida_nome(informacoes);
    le_valida_idade(informacoes);
    le_valida_local_piloto(informacoes);
    le_valida_ID(informacoes);
    le_valida_sexo(informacoes);
    le_valida_equipe(informacoes);
    fflush(stdin);
    //cadastro do circuito
    le_valida_pista(informacoes);
    le_valida_local(informacoes);
    le_valida_distancia(informacoes);
    le_valida_tempo(informacoes);
    le_gera_cod(informacoes);
    fflush(stdin);
    //guardando data do circuito para validacao posterior
    le_valida_data_circuito(informacoes);

    fflush(stdin);
    informacoes->proxPointer = dados;
    fflush(stdin);

    return informacoes;
}

//dados do circuito
void le_valida_nome(data* informacoes){
    printf("Digite seu nome:");
    fgets(informacoes->piloto.nome, 30, stdin);
}

void le_valida_idade(data* informacoes){
    printf("Digite sua idade:");
    scanf("%i", &informacoes->piloto.idade);
}

void le_valida_local_piloto(data* informacoes){
    printf("Digite seu pais de origem:");
    fgets(informacoes->piloto.paisOrigem, 30, stdin);
}

void le_valida_ID(data* informacoes){
    printf("Digite seu ID:");
    do
    {
        scanf("%s", &informacoes->piloto.id);
        if(informacoes->piloto.id < 100 && informacoes->piloto.id > 500){
            printf("ID FORA DO RANGE PERMITIDO, POR FAVOR INFORME UM ID ENTRE 100 E 500!");
            printf("Digite seu ID NOVAMENTE:");
            scanf("%s", &informacoes->piloto.id);
        }
    } while (informacoes->piloto.id < 100 && informacoes->piloto.id > 500);
}

void le_valida_sexo(data* informacoes){
    printf("Digite seu sexo:");
    scanf("%s", &informacoes->piloto.sexo);
}

void le_valida_equipe(data* informacoes){
    printf("Digite o Nome da sua Equipe: ");
    fgets(informacoes->piloto.equipe, 30, stdin);
}

//cadastro circuito
void le_gera_cod(data* informacoes){
    informacoes->circuito.cod =+1;
}
//BUGGGGGGGGG
void le_valida_pista(data* informacoes){
    printf("Digite o nome da pista utilizada: ");
    fgets(informacoes->circuito.pista, 30, stdin);
}

void le_valida_local(data* informacoes){
    //abrir arq txt para validacao
    printf("Informe o pais onde foi realizado o circuito:");
    fgets(informacoes->circuito.pais, 30, stdin);
}

void le_valida_distancia(data* informacoes){
    printf("Digite a distancia do circuito em [KM]: ");
    scanf("%i", &informacoes->circuito.distancia);
}

void le_valida_tempo(data* informacoes){
    printf("INFORME OS MINUTOS/SEGUNDOS/MILISEGUNDOS NESTA ORDEM!");
    scanf("%s/%s/%s", &informacoes->circuito.minutos, &informacoes->circuito.segundos, &informacoes->circuito.milisegundos);
}

void le_valida_data_circuito(data* informacoes){
    printf("Digite a data que esta sendo realizado esse circuito, [DD/MM/AA]: ");
    scanf("%i/%i/%i", &informacoes->data.dia, &informacoes->data.mes, &informacoes->data.ano);
}

void melhor_voltar(data* dados){
    data *pAuxiliar;

    system("cls");
    if (dados==NULL)
    {
        printf("Por favor, cadastre um piloto e um circuito primeiro!\n");
        system("pause");
        system("cls");
    }

    for (pAuxiliar=dados;pAuxiliar!=NULL; pAuxiliar->proxPointer)
    {

        //fazer pesquisar circuito menor

        printf("DADOS DO PILOTO!\n");
        printf("\nNOME : %s", pAuxiliar->piloto.nome);
        printf("\nIDADE: %s", pAuxiliar->piloto.idade);
        printf("\nID: %s", pAuxiliar->piloto.id);
        printf("\nPAIS DE ORIGEM: %s", pAuxiliar->piloto.paisOrigem);
        printf("\nSEXO: %s", pAuxiliar->piloto.sexo);
        
        printf("\nDADOS DO CIRCUITO\n");
        printf("\nPISTA", pAuxiliar->circuito.pista);
        printf("\nPAIS/LOCAL: %s", pAuxiliar->circuito.pais);
        printf("\nDISTANCIA: %s", pAuxiliar->circuito.distancia);
        printf("\nMINUTOS: %s", pAuxiliar->circuito.minutos);
        printf("\nSEGUNDOS: %s", pAuxiliar->circuito.segundos);
        printf("\nMILISEGUNDOS: %s", pAuxiliar->circuito.milisegundos);

        printf("DATA DA REALIZACAO DO CIRCUITO\n");
        printf("\nDIA: %s", pAuxiliar->data.dia);
        printf("\nMES: %s", pAuxiliar->data.mes);
        printf("\nANO: %s", pAuxiliar->data.ano);
        
    }
}

//imprimir todos dados
void imprimir_infos(data* dados){
    data *pAuxiliar;

    system("cls");
    if (dados==NULL)
    {
        printf("Por favor, cadastre um piloto e um circuito primeiro!\n");
        system("pause");
        system("cls");
    }

    for (pAuxiliar=dados;pAuxiliar!=NULL; pAuxiliar->proxPointer)
    {
        printf("DADOS DO PILOTO!\n");
        printf("\nNOME : %s", pAuxiliar->piloto.nome);
        printf("\nIDADE: %s", pAuxiliar->piloto.idade);
        printf("\nID: %s", pAuxiliar->piloto.id);
        printf("\nPAIS DE ORIGEM: %s", pAuxiliar->piloto.paisOrigem);
        printf("\nSEXO: %s", pAuxiliar->piloto.sexo);
        
        printf("\nDADOS DO CIRCUITO\n");
        printf("\nPISTA", pAuxiliar->circuito.pista);
        printf("\nPAIS/LOCAL: %s", pAuxiliar->circuito.pais);
        printf("\nDISTANCIA: %s", pAuxiliar->circuito.distancia);
        printf("\nMINUTOS: %s", pAuxiliar->circuito.minutos);
        printf("\nSEGUNDOS: %s", pAuxiliar->circuito.segundos);
        printf("\nMILISEGUNDOS: %s", pAuxiliar->circuito.milisegundos);

        printf("DATA DA REALIZACAO DO CIRCUITO\n");
        printf("\nDIA: %s", pAuxiliar->data.dia);
        printf("\nMES: %s", pAuxiliar->data.mes);
        printf("\nANO: %s", pAuxiliar->data.ano);
        
    }
}

void buscar_nome(data* dados){
    data *pAuxiliar;
    char nome[TAMANHO];

    system("cls");
    if (dados==NULL)
    {
        printf("Por favor, cadastre um piloto e um circuito primeiro!\n");
        system("pause");
        system("cls");
    }

    for (pAuxiliar=dados;pAuxiliar!=NULL; pAuxiliar->proxPointer)
    {   
        if (strcmp(pAuxiliar->piloto.nome, nome)==0)
        {
            printf("PILOTO ENCONTRADO!");
            printf("DADOS DO PILOTO!\n");
            printf("\nNOME : %s", pAuxiliar->piloto.nome);
            printf("\nIDADE: %s", pAuxiliar->piloto.idade);
            printf("\nID: %s", pAuxiliar->piloto.id);
            printf("\nPAIS DE ORIGEM: %s", pAuxiliar->piloto.paisOrigem);
            printf("\nSEXO: %s", pAuxiliar->piloto.sexo);
            
            printf("\nDADOS DO CIRCUITO\n");
            printf("\nPISTA", pAuxiliar->circuito.pista);
            printf("\nPAIS/LOCAL: %s", pAuxiliar->circuito.pais);
            printf("\nDISTANCIA: %s", pAuxiliar->circuito.distancia);
            printf("\nMINUTOS: %s", pAuxiliar->circuito.minutos);
            printf("\nSEGUNDOS: %s", pAuxiliar->circuito.segundos);
            printf("\nMILISEGUNDOS: %s", pAuxiliar->circuito.milisegundos);

            printf("DATA DA REALIZACAO DO CIRCUITO\n");
            printf("\nDIA: %s", pAuxiliar->data.dia);
            printf("\nMES: %s", pAuxiliar->data.mes);
            printf("\nANO: %s", pAuxiliar->data.ano);
        }
    }
}

void buscar_tempo(data* dados){
    data *pAuxiliar;
    int minutos, segundos, milisegundos;

    system("cls");
    if (dados==NULL)
    {
        printf("Por favor, cadastre um piloto e um circuito primeiro!\n");
        system("pause");
        system("cls");
    }

    for (pAuxiliar=dados;pAuxiliar!=NULL; pAuxiliar->proxPointer)
    {   
        if (pAuxiliar->circuito.minutos == minutos && pAuxiliar->circuito.segundos == segundos && pAuxiliar->circuito.milisegundos == milisegundos)
        {
            printf("PILOTO ENCONTRADO!");
            printf("DADOS DO PILOTO!\n");
            printf("\nNOME : %s", pAuxiliar->piloto.nome);
            printf("\nIDADE: %s", pAuxiliar->piloto.idade);
            printf("\nID: %s", pAuxiliar->piloto.id);
            printf("\nPAIS DE ORIGEM: %s", pAuxiliar->piloto.paisOrigem);
            printf("\nSEXO: %s", pAuxiliar->piloto.sexo);
            
            printf("\nDADOS DO CIRCUITO\n");
            printf("\nPISTA", pAuxiliar->circuito.pista);
            printf("\nPAIS/LOCAL: %s", pAuxiliar->circuito.pais);
            printf("\nDISTANCIA: %s", pAuxiliar->circuito.distancia);
            printf("\nMINUTOS: %s", pAuxiliar->circuito.minutos);
            printf("\nSEGUNDOS: %s", pAuxiliar->circuito.segundos);
            printf("\nMILISEGUNDOS: %s", pAuxiliar->circuito.milisegundos);

            printf("DATA DA REALIZACAO DO CIRCUITO\n");
            printf("\nDIA: %s", pAuxiliar->data.dia);
            printf("\nMES: %s", pAuxiliar->data.mes);
            printf("\nANO: %s", pAuxiliar->data.ano);
        }
    }
}

void buscar_cod_circuito(data* dados){
    data *pAuxiliar;
    int cod;

    system("cls");
    if (dados==NULL)
    {
        printf("Por favor, cadastre um piloto e um circuito primeiro!\n");
        system("pause");
        system("cls");
    }
    printf("Digite o codigo do circuito que deseja procurar: ");
    sacnf("%s", &cod);

    for (pAuxiliar=dados;pAuxiliar!=NULL; pAuxiliar->proxPointer)
    {   
        if (pAuxiliar->circuito.cod == cod)
        {
            printf("PILOTO ENCONTRADO!");
            printf("DADOS DO PILOTO!\n");
            printf("\nNOME : %s", pAuxiliar->piloto.nome);
            printf("\nIDADE: %s", pAuxiliar->piloto.idade);
            printf("\nID: %s", pAuxiliar->piloto.id);
            printf("\nPAIS DE ORIGEM: %s", pAuxiliar->piloto.paisOrigem);
            printf("\nSEXO: %s", pAuxiliar->piloto.sexo);
            
            printf("\nDADOS DO CIRCUITO\n");
            printf("\nPISTA", pAuxiliar->circuito.pista);
            printf("\nPAIS/LOCAL: %s", pAuxiliar->circuito.pais);
            printf("\nDISTANCIA: %s", pAuxiliar->circuito.distancia);
            printf("\nMINUTOS: %s", pAuxiliar->circuito.minutos);
            printf("\nSEGUNDOS: %s", pAuxiliar->circuito.segundos);
            printf("\nMILISEGUNDOS: %s", pAuxiliar->circuito.milisegundos);

            printf("DATA DA REALIZACAO DO CIRCUITO\n");
            printf("\nDIA: %s", pAuxiliar->data.dia);
            printf("\nMES: %s", pAuxiliar->data.mes);
            printf("\nANO: %s", pAuxiliar->data.ano);
        }
    }
}





