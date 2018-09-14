#include <iostream>
#include "Menu.h"
#include "Clear.h"

using namespace std;

Menu::Menu(){}

int Menu::MenuPrincipal(){
	int opcao;
	cout <<"\n\n\t--------------------------------- Menu Principal ---------------------------------" << endl;
	cout << endl;
	cout <<"\t\t[1] Cadastrar Imóvel"<<endl;
	cout <<"\t\t[2] Consultar Imóvel"<<endl;
	cout <<"\t\t[0] Encerrar Programa"<<endl;
	cout <<endl;
	cout <<"\t----------------------------------------------------------------------------------"<<endl;
	cout <<"\tDigite sua opção: "<<endl;
    cin >> opcao;
    return opcao;
}

int Menu::MenuConsultar(){

    Clear();
	int opcao;
	cout <<"\n\n\t--------------------------------- Menu Consulta ----------------------------------"<< endl;
	cout << endl;
	cout <<"\t\t[1] Todos os Imóveis"<< endl;
	cout <<"\t\t[2] Todos os Imóveis com Descrição" << endl;
	cout <<"\t\t[3] Imóveis para VENDA por TIPO (Casa, Apartamento, Terreno)" << endl;
	cout <<"\t\t[4] Imóveis para ALUGUEL por TIPO (Casa, Apartamento, Terreno)" << endl;
	cout <<"\t\t[5] Imóveis para VENDA por BAIRRO"<< endl;
	cout <<"\t\t[6] Imóveis para ALUGUEL por BAIRRO" << endl;
	cout <<"\t\t[7] Todos os Imóveis por CIDADE" << endl;
	cout << endl;
	cout <<"\t----------------------------------------------------------------------------------" << endl;
	cout <<"\tDigite sua opção: " << endl;
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
