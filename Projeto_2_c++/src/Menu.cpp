#include <iostream>
#include "Menu.h"
#include "Clear.h"

using namespace std;

Menu::Menu(){}

int Menu::MenuPrincipal(){
	int opcao;
	cout <<"\n\n\t--------------------------------- Menu Principal ---------------------------------" << endl;
	cout << endl;
	cout <<"\t\t[1] Cadastrar Im�vel"<<endl;
	cout <<"\t\t[2] Consultar Im�vel"<<endl;
	cout <<"\t\t[0] Encerrar Programa"<<endl;
	cout <<endl;
	cout <<"\t----------------------------------------------------------------------------------"<<endl;
	cout <<"\tDigite sua op��o: "<<endl;
    cin >> opcao;
    return opcao;
}

int Menu::MenuConsultar(){

    Clear();
	int opcao;
	cout <<"\n\n\t--------------------------------- Menu Consulta ----------------------------------"<< endl;
	cout << endl;
	cout <<"\t\t[1] Todos os Im�veis"<< endl;
	cout <<"\t\t[2] Todos os Im�veis com Descri��o" << endl;
	cout <<"\t\t[3] Im�veis para VENDA por TIPO (Casa, Apartamento, Terreno)" << endl;
	cout <<"\t\t[4] Im�veis para ALUGUEL por TIPO (Casa, Apartamento, Terreno)" << endl;
	cout <<"\t\t[5] Im�veis para VENDA por BAIRRO"<< endl;
	cout <<"\t\t[6] Im�veis para ALUGUEL por BAIRRO" << endl;
	cout <<"\t\t[7] Todos os Im�veis por CIDADE" << endl;
	cout << endl;
	cout <<"\t----------------------------------------------------------------------------------" << endl;
	cout <<"\tDigite sua op��o: " << endl;
    cin >> opcao;
    return opcao;
}

int Menu::MenuCadastrar(){

    Clear();
	int opcao;
    cout << "Escolha que tipo de imovel deseja cadastrar" << endl;
    cout << "[1] Casa" << endl;
    cout << "[2] Apartamento" << endl;
    cout << "[3] Terreno" << endl;
    cin >> opcao;
    return opcao;

}

int Menu::MenuEncerrar(){

    Clear();
	int opcao;
    cout << "Deseja salvar as alteracoes ?" << endl;
    cout << "[1] Sim" << endl;
    cout << "[2] Nao" << endl;
    cout << "[3] Cancelar" << endl;
    cin >> opcao;
    return opcao;

}
