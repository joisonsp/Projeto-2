#include <iostream>
#include <string>
#include <stdlib.h>
#include <list>

#include "Menu.h"
#include "Imovel.h"
#include "Terreno.h"
#include "Apartamento.h"
#include "Casa.h"
#include "SistemaImobiliaria.h"
#include "Endereco.h"
#include <fstream>


using namespace std;




void StringMaiusculoEAcento(string n){
	int i;

	for(i = 0; i < n.length(); i++){
		n[i] = toupper(n[i]);
	}
}//Para todas as letras serem consideradas maiusculas

/*char especiais[][] = {{'á', 'a'},
                     {'à', 'a'},
                     {'ã', 'a'},
                     {'é', 'e'},
                     {'è', 'e'},
                     {'ê', 'e'},
                     {'í', 'i'},
                     {'ó', 'o'},
                     {'ô', 'o'},
                     {'ü', 'u'},
                     {'ú', 'u'},
                     {'ç', 'c'},
                     {'Á', 'A'},
                     {'À', 'A'},
                     {'Ã', 'A'},
                     {'É', 'E'},
                     {'È', 'E'},
                     {'Ê', 'E'},
                     {'Í', 'I'},
                     {'Ó', 'O'},
                     {'Ô', 'O'},
                     {'Ü', 'U'},
                     {'Ú', 'U'},
                     {'Ç', 'C'}
};*/

void SalvaDados(list <Imovel*> lista){
    ofstream file;

    file.open("dados.txt");

   if (!file.is_open()) {
        cout << "Erro ao abrir o arquivo";
        return ;
    }

    for (Imovel *l: lista) {
        file << l->getCategoria() << endl;
        if(l->getCategoria() == 1){ // CASA
            Casa * c = (Casa*)l;
            file << c->toString() << endl;
        }
        else if(l->getCategoria() == 2){ // CASA
            Apartamento * c = (Apartamento*)l;
            file << c->toString() << endl;
        }
        else if(l->getCategoria() == 3){ // TERRENO
            Terreno * c = (Terreno*)l;
            file << c->toString() << endl;
        }
    }

    file.close();
}


/*
void LerDados(){

    string nome;
    ifstream file;
    file.open("dados.txt");

        if (!file.is_open()){
            cout << "Error ao abrir o arquivo";
            return 0;
        }

    getline(file, nome);
    getline(file, telefone);
    file >> cod;
    file.close;

}
*/
int main()
{
    //fstream arquivo;
    //arquivo.open("teste.txt",  ios::out|ios::app);
    //SalvaDados (lista);


    SistemaImobiliaria si;
    Menu menu1;
    int op;

    //menu1.MenuPrincipal();

    setlocale(LC_ALL, "Portuguese");

    while(1){
    switch(menu1.MenuPrincipal()){
        case 0 :
            op = menu1.MenuEncerrar();
            if(op == 1){}//SalvaDados(si.getImoveis())}
            else if(op == 2) return 1;
            else if(op == 3) ;
            break;
        case 1 :
            op = menu1.MenuCadastrar();
            if(op == 0){} //{menu1.MenuPrincipal();}
            else if(op == 1){si.cadastrarCasa();}
            else if(op == 2) {/*cadastrar um apto*/}
            else if(op == 3){/*cadastrar um terreno*/}
            break;
        case 2 :

            op = menu1.MenuConsultar();
            if(op == 0) ;//{menu1.MenuPrincipal();}
            if(op == 1){/*listar todos os imoveis */}
            else if(op == 2){/*listar todos os imoveis com descricao*/}
            else if(op == 3){/*listar todos os imoveis para venda por tipo */}
            else if(op == 4){/*listar todos os imoveis para aluguel por tipo*/}
            else if(op == 5){/*listar todos os imoveis para venda por bairro*/}
            else if(op == 6){/*listar todos os imoveis para aluguel por bairro*/}
            else if(op == 7){/*listar todos os imoveis por cidade*/}
            break;
    }
    }
    //cout << "Hello world!" << endl;
    return 0;
}



/*cadastrarCasa( casa ){

    listacasas.pushback(casa);

}*/
