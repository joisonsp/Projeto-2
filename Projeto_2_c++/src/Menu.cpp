#include <iostream>
#include "Menu.h"
#include "Clear.h"

using namespace std;

Menu::Menu(){}

int Menu::MenuPrincipal(){
	int opcao;
	cout <<"\n\n\t------------------------- Menu Principal -------------------------" << endl;
	cout << endl;
	cout << "\t\t[0] Encerrar Programa" << endl;
	cout << "\t\t[1] Cadastrar Imóvel" << endl;
	cout << "\t\t[2] Consultar Imóvel" << endl;
	cout << endl;
	cout << "\t------------------------------------------------------------------" << endl;
	cout << "\tDigite sua opção: ";
    cin >> opcao;
    return opcao;
}

int Menu::MenuConsultar(){

    Clear();
	int opcao;
	cout << "\n\n\t-------------------------- Menu Consulta ---------------------------" << endl;
	cout << endl;
	cout << "\t[0] Voltar ao Menu Pricipal" << endl;
	cout << "\t[1] Todos os Imóveis"<< endl;
	cout << "\t[2] Todos os Imóveis com Descrição" << endl;
	cout << "\t[3] Imóveis para VENDA por TIPO (Casa, Apartamento, Terreno)" << endl;
	cout << "\t[4] Imóveis para ALUGUEL por TIPO (Casa, Apartamento, Terreno)" << endl;
	cout << "\t[5] Imóveis para VENDA por BAIRRO"<< endl;
	cout << "\t[6] Imóveis para ALUGUEL por BAIRRO" << endl;
	cout << "\t[7] Todos os Imóveis por CIDADE" << endl;
	cout << endl;
	cout << "\t---------------------------------------------------------------------" << endl;
	cout << "\tDigite sua opção: ";
    cin >> opcao;
    return opcao;
}

int Menu::MenuCadastrar(){

    Clear();
	int opcao;
	cout << "\n\n\t-------------------------- Menu Cadastrar ---------------------------" << endl;
	cout << endl;
    cout << "\t\tEscolha que tipo de imovel deseja cadastrar !\n" << endl;
    cout << "\t\t[0] Voltar ao Menu Pricipal" << endl;
    cout << "\t\t[1] Casa" << endl;
    cout << "\t\t[2] Apartamento" << endl;
    cout << "\t\t[3] Terreno" << endl;
    cout << endl;
    cout << "\t---------------------------------------------------------------------" << endl;
    cout << "\tDigite sua opção: ";
    cin >> opcao;
    return opcao;

}

int Menu::MenuEncerrar(){

    Clear();
	int opcao;
	cout << "\n\n\t-------------------------- Menu Encerrar ---------------------------" << endl;
	cout << endl;
    cout << "\t\tDeseja salvar as alteracoes ?\n" << endl;
    cout << "\t\t[1] Sim" << endl;
    cout << "\t\t[2] Nao" << endl;
    cout << "\t\t[3] Cancelar" << endl;
    cout << endl;
    cout << "\t---------------------------------------------------------------------" << endl;
    cout << "\tDigite sua opção: ";
    cin >> opcao;
    return opcao;

}
