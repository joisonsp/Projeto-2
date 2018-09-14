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

}

void MenuConsultar::setOpcao(int opcao){
    opcao = this -> opcao;
}
