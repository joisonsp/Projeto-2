#include "MenuConsultar.h"
#include "clear.h"
#include <iostream>

using namespace std;

MenuConsultar::MenuConsultar()
{

}

void MenuConsultar::ExibirMenu(){

	Clear();
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

}

void MenuConsultar::setOpcao(int opcao){
    opcao = this -> opcao;
}
