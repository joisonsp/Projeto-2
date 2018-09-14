#include "MenuEncerrar.h"
#include <iostream>

using namespace std;

MenuEncerrar::MenuEncerrar()
{
    opcao = 0;
}

void MenuEncerrar::ExibirMenu(){

    cout << "Deseja salvar as alteracoes ?" << endl;
    cout << "[1] Sim" << endl;
    cout << "[2] Nao" << endl;
    cout << "[3] Cancelar" << endl;
}

void MenuEncerrar::setOpcao(int opcao){
    opcao = this -> opcao;
}
