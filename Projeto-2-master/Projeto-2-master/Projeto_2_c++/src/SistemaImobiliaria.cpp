#include "SistemaImobiliaria.h"

using namespace std;

SistemaImobiliaria::SistemaImobiliaria()
{
    //ctor
}


void SistemaImobiliaria::cadastrarEndereco(Endereco &endereco){

    string logradouro, bairro, cidade, cep;
    int numero;

    cout << "\n\t------ Peencha os campos para realizar o Cadastro do Endereco ------ " << endl;

    cout << "\n\tQual é o logradouro? ";
    getline(cin, logradouro);
    cin.ignore();
    cout << endl;

    cout << "\n\tQual é o bairro? ";
    getline(cin, bairro);
    cin.ignore();
    cout << endl;

    cout << "\n\tQual é o cidade? ";
    getline(cin, cidade);
    cin.ignore();
    cout << endl;

    cout << "\n\tQual é o CEP? ";
    getline(cin, cep);
    cin.ignore();
    cout << endl;

    cout << "\n\tQual é o numero? ";
    cin >> numero;
    cin.ignore();
    cout << endl;

    endereco = Endereco(logradouro, bairro, cidade, cep, numero);
}

void SistemaImobiliaria::cadastrarImovel(Imovel* imovel){
    this->imoveis.push_back(imovel);
}
void SistemaImobiliaria::cadastrarCasa(){

    int numPavimentos, tipoOferta, numQuartos;
    double valor, areaTerreno, areaConstruida;

    Endereco endereco = Endereco();

    cadastrarEndereco(endereco);

    cout << "\n\tDeseja Alugar(1) OU Vender(2)? ";
    cin >> tipoOferta;
    cin.ignore();
    cout << endl;

    cout << "\n\tQual é o valor? ";
    cin >> valor;
    cin.ignore();
    cout << endl;

    cout << "\n\tHá quantos pavimentos? ";
    cin >> numPavimentos;
    cin.ignore();
    cout << endl;

    cout << "\n\tHá quantos quartos? ";
    cin >> numQuartos;
    cin.ignore();
    cout << endl;

    cout << "\n\tQual é o tamanho da area construida? ";
    cin >> areaConstruida;
    cin.ignore();
    cout << endl;

    cout << "\n\tQual é o tamanho da area do terreno? ";
    cin >> areaTerreno;
    cin.ignore();
    cout << endl;

    Imovel *casa = new Casa(numPavimentos, areaConstruida, numQuartos, areaTerreno, tipoOferta, valor);
    cadastrarImovel(casa);

}
void SistemaImobiliaria::cadastrarApartamento(){

    string posicao;
    int vagasGaragem, numQuartos, tipoOferta;
    double valorCondominio, area, valor;

    Endereco endereco = Endereco();

    cadastrarEndereco(endereco);
    cout << "Deseja Alugar(1) OU Vender(2)? ";
    cin >> tipoOferta;
    cin.ignore();
    cout << endl;

    cout << "Qual é o valor do condomínio?";
    cin >> valorCondominio;
    cin.ignore();
    cout << endl;

    cout << "Qual é o valor?";
    cin >> valor;
    cin.ignore();
    cout << endl;

    cout << "Em qual posição fica o apartamento? ";
    getline(cin, posicao);
    cout << endl;

    cout << "Há quantas vagas na Garagem? ";
    cin >> vagasGaragem;
    cin.ignore();
    cout << endl;

    cout << "Quantos quartos? ";
    cin >> numQuartos;
    cin.ignore();
    cout << endl;

    cout << "Qual é a area? ";
    cin >> area;
    cin.ignore();
    cout << endl;

    Imovel *apartamento = new Apartamento(posicao, numQuartos, valorCondominio, vagasGaragem, area, tipoOferta, valor);
    cadastrarImovel(apartamento);

}
void SistemaImobiliaria::cadastrarTerreno(){

    Endereco endereco = Endereco();

    cadastrarEndereco(endereco);

    double area, valor;
    int tipoOferta;

    cout << "\n\tDeseja Alugar(1) OU Vender(2)? ";
    cin >> tipoOferta;
    cin.ignore();
    cout << endl;

    cout << "\n\tQual é o valor? ";
    cin >> valor;
    cin.ignore();
    cout << endl;

    cout << "\n\tDigite o tamanho da area: ";
    cin >> area;
    cin.ignore();
    cout << endl;

    Imovel *terreno = new Terreno(area);
    cadastrarImovel(terreno);

}
list<Imovel*> SistemaImobiliaria::getImoveis(){

}
list<string> SistemaImobiliaria::getDescricaoImoveis(){

}
void SistemaImobiliaria::getImoveisPorTipo(int tipo){

}
list<Imovel*> SistemaImobiliaria::getImoveisParaAlugarPorBairro(string bairro){

}
list<Imovel*> SistemaImobiliaria::getImoveisParaVenderPorBairro(string bairro){

}
list<Imovel*> SistemaImobiliaria::getImoveisPorCidade(string bairro){

}
