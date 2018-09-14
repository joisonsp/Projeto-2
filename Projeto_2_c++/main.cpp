#include <iostream>
#include <vector>
#include "MenuPrincipal.h"
#include "MenuCadastrar.h"
#include "MenuConsultar.h"
#include "MenuEncerrar.h"

#include <stdlib.h>
#include <locale>

using namespace std;

/*void StringMaiusculoEAcento(char frase[], size_t tamanho){
	int i;
    setlocale(LC_ALL, "");
	for(i = 0; i < tamanho-1; i++){
		frase[i] = toupper(frase[i]);
	}
}Para todas as letras serem consideradas maiusculas*/

int main()
{

    int opcao, opE, opC;

    Casa cs;
    MenuPrincipal menuP;
    MenuCadastrar menuCa;
    MenuConsultar menuCo;
    MenuEncerrar menuEn;

    menuP.ExibirMenu();
    cin >> opcao;

    switch(opcao){
        case 0 :
            menuEn.ExibirMenu();
            cin >> opE;
            switch(opE){
                case 1:
                    exit(0);
                case 2:
                    exit(0);
                case 3:
                    break;
            }
        case 1 :
            menuCa.ExibirMenu();
            cin >> opC;
            switch(opC){
                case 1 :
                    cout << "Digite:" << endl << "longradouro: " << endl()

            }

    }

    menuP.ExibirMenu();
    cin >> opcao;

    vector<Imovel> lista;

    cout << "Hello world!" << endl;
    return 0;
}
