#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
#include <vector>
#include<conio.h>
using namespace std;


void menuPrincipal(){
    system("CLS");
    cout << "Digite [1] e pressione [Enter] para cadastrar um usuário." << endl;
    cout << "Digite [2] e pressione [Enter] para editar um usuário." << endl;
    cout << "Digite [3] e pressione [Enter] para excluir um usuário." << endl;
    cout << "Digite [4] e pressione [Enter] para buscar um usuário pelo ID." << endl;
    cout << "Digite [5] e pressione [Enter] para buscar um usuário pelo pelo e-mail." << endl;
    cout << "Digite [6] e pressione [Enter] para imprimir todos os usuários cadastrados." << endl;
}

int main(){
//Declara��o de variaveis
    int escolhaMenu, i, novoUsuario;
    string nomeRegistro1, nomeRegistro2, nomeRegistro3;
    string emailRegistro, sexoRegistro, enderecoRegistro;
    char simNao;
    bool doseRegistro;
    double alturaRegistro;
    novoUsuario = 0;
    vector<string> nome, email, sexo, endereco;
    vector<bool> dose;
    vector<double> altura;
    setlocale(LC_ALL, "portuguese");
    system("CLS");
    cout << "Seja bem-vindo ao Projeto 1 da disciplina de Programação Estruturada, ";
    cout << "ministrada pela Prof. Joyce Siqueira." << endl;
    cout << "Trata-se de um software de cadastro e edição de informações sobre usuários." << endl;
    system("pause");
    system("CLS");
    cout << "Digite [1] e pressione [Enter] para cadastrar um usuário." << endl;
    cout << "Digite [2] e pressione [Enter] para editar um usuário." << endl;
    cout << "Digite [3] e pressione [Enter] para excluir um usuário." << endl;
    cout << "Digite [4] e pressione [Enter] para buscar um usuário pelo ID." << endl;
    cout << "Digite [5] e pressione [Enter] para buscar um usuário pelo pelo e-mail." << endl;
    cout << "Digite [6] e pressione [Enter] para imprimir todos os usuários cadastrados." << endl << endl;
    cout << "Digite aqui: ";
    cin >> escolhaMenu;
    system("CLS");
    while ((escolhaMenu != 1) && (escolhaMenu != 2) && (escolhaMenu != 3) && (escolhaMenu != 4) && (escolhaMenu != 5) && (escolhaMenu != 6)){
        //system("pause");
        menuPrincipal();
        cout << endl;
        cout << "Por favor, digite uma opção válida." << endl;
        cout << "Digite aqui: ";
        cin >> escolhaMenu;
    }
    if (escolhaMenu == 1){
        for (i = 0; i <= novoUsuario; i++){
            cout << i << endl; //REMOVER AO CONCLUIR ESTA PARTE!
            cout << "REGISTRO DE NOVO USUÁRIO" << endl << endl;
            cout << "Digite o primeiro nome: ";
            cin >> nomeRegistro1;
            cout << "Digite o nome ou sobrenome do meio: ";
            cin >> nomeRegistro2;
            cout << "Digite o último sobrenome: ";
            cin >> nomeRegistro3;
            cout << nomeRegistro1 << " " << nomeRegistro2 << " " << nomeRegistro3 << endl;
            cout << "Sexo (Masculino ou Feminino): ";
            cin >> sexoRegistro;
            while ((sexoRegistro != "Masculino") && (sexoRegistro != "Feminino")){
                cout << "Entrada inválida! Digite \"Masculino\" ou \"Feminino\"." << endl;
                cout << "Sexo: ";
                cin >> sexoRegistro;
            }
            sexo.push_back(sexoRegistro);
            cout << "Altura (em metros): " << endl; // Aceitar apenas valores entre 1 e 2 metros
            cin >> alturaRegistro;
            while ((alturaRegistro < 1) || (alturaRegistro > 2)){
                cout << "Altura inválida, anões e gigantes não são aceitos." << endl;
                cout << "Altura (em metros): " << endl;
                cin >> alturaRegistro;
            }
            altura.push_back(alturaRegistro);
            cout << "Doses de vacina: ";
            cin >> doseRegistro;
            dose.push_back(doseRegistro);
            cout << "E-mail: ";
            cin >> emailRegistro;
            email.push_back(emailRegistro);
            cout << "Endereço: ";
            cin >> enderecoRegistro;
            endereco.push_back(enderecoRegistro);
            
              int i;

                 printf("id do usuario\n");

                for (i = 0; i <1; i++)
                {
				string str ("%d %d", &&nomeRegistro1, nomeRegistro3);
                printf("%d ", rand());
                }

                 getch();

            
            cout << "ID do usuário (gerada automaticamente): " << endl << endl;
            cout << "Deseja cadastrar mais um usuário?" << endl;
            cout << "Digite [s] para sim ou [n] para não e pressione [Enter]." << endl;
            cout << "Sua resposta: ";
            cin >> simNao;
            while ((simNao != 's') && (simNao != 'n')){
                cout << "Opção inválida!";
            }
            if (simNao == 's'){
                novoUsuario++;
                system("CLS");
            }else if (simNao == 'n'){
                system("CLS");
//ADICIONAR A FUNÇÃO DO MENU PRINCIPAL
                //cout << nomeRegistro;
            }
        }
    }
    if (escolhaMenu == 2){

    }
    if (escolhaMenu == 3){

    }
    if (escolhaMenu == 4){

    }
    if (escolhaMenu == 5){

    }
    if (escolhaMenu == 6){

    }
}
