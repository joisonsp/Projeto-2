#include <iostream>
#include <vector>
#include <locale>
#include <string>
#include <stdlib.h>

#include "Menu.h"
#include "Imovel.h"
#include "Terreno.h"
#include "Apartamento.h"
#include "Casa.h"
#include "SistemaImobiliaria.h"
#include "Endereco.h"

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

    Casa cs;
    Menu menu1;

    //menu1.MenuPrincipal();


    switch(menu1.MenuPrincipal()){
        case 0 :
            menu1.MenuEncerrar();
            if(menu1.MenuEncerrar() == 1){/*salvar no arquivo*/}
            else if(menu1.MenuEncerrar() == 2) exit(0);
            else if(menu1.MenuEncerrar() == 3){menu1.MenuPrincipal();}
            break;
        case 1 :
            menu1.MenuCadastrar();
            if(menu1.MenuCadastrar() == 1){/*Cadastrar uma casa*/}
            else if(menu1.MenuCadastrar() == 2) {/*cadastrar um apto*/}
            else if(menu1.MenuCadastrar() == 3){/*cadastrar um terreno*/}
            break;
        case 2 :
            menu1.MenuConsultar();
            if(menu1.MenuConsultar() == 1){/*listar todos os imoveis */}
            else if(menu1.MenuConsultar() == 2){/*listar todos os imoveis com descricao*/}
            else if(menu1.MenuConsultar() == 3){/*listar todos os imoveis para venda por tipo */}
            else if(menu1.MenuConsultar() == 4){/*listar todos os imoveis para aluguel por tipo*/}
            else if(menu1.MenuConsultar() == 5){/*listar todos os imoveis para venda por bairro*/}
            else if(menu1.MenuConsultar() == 6){/*listar todos os imoveis para aluguel por bairro*/}
            else if(menu1.MenuConsultar() == 7){/*listar todos os imoveis por cidade*/}
            break;
    }


    //vector<Imovel> lista;

    cout << "Hello world!" << endl;
    return 0;
}



/*cadastrarCasa( casa ){

    listacasas.pushback(casa);

}*/
