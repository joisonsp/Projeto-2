#include "MenuPrincipal.h"
#include <iostream>

using namespace std;

MenuPrincipal::MenuPrincipal()
{
    //ctor
}

void MenuPrincipal::ExibirMenu(){
	cout <<"\n\n\t--------------------------------- Menu Principal ---------------------------------" << endl;
	cout << endl;
	cout <<"\t\t[1] Cadastrar Im�vel"<<endl;
	cout <<"\t\t[2] Consultar Im�vel"<<endl;
	cout <<"\t\t[0] Encerrar Programa"<<endl;
	cout <<endl;
	cout <<"\t----------------------------------------------------------------------------------"<<endl;
	cout <<"\tDigite sua op��o: "<<endl;
}

void MenuPrincipal::setOpicao(int opcao){
    opcao = this -> opcao;

}
