#include "MenuCadastrar.h"
#include <iostream>

using namespace std;

MenuCadastrar::MenuCadastrar()
{
    opcao = 0;
}

void MenuCadastrar::ExibirMenu(){
    cout << "Escolha que tipo de imovel deseja cadastrar" << endl;
    cout << "[1] Casa" << endl;
    cout << "[2] Apartamento" << endl;
    cout << "[3] Terreno" << endl;
}

void MenuCadastrar::setOpcao(int opcao){
    opcao = this -> opcao;
}
