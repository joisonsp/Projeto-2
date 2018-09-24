#include "SistemaImobiliaria.h"

using namespace std;

SistemaImobiliaria::SistemaImobiliaria()
{
    //ctor
}


void SistemaImobiliaria::cadastrarEndereco(Endereco &endereco){

    string logradouro, bairro, cidade, cep;
    int numero;
    cout << "Qual é o logradouro?" << endl;
    getline(cin, logradouro);
    cout << "Qual é o bairro?" << endl;
    getline(cin, bairro);
    cout << "Qual é o cidade?" << endl;
    getline(cin, cidade);
    cout << "Qual é o CEP?" << endl;
    getline(cin, cep);
    cout << "Qual é o numero?" << endl;
    cin >> numero;
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
    cout << "Deseja alugar(1) ou vender(2)?" << endl;
    cin >> tipoOferta;
    cout << "Qual é o valor ?" << endl;
    cin >> valor;
    cout << "Há quantos pavimentos ?" << endl;
    cin >> numPavimentos;
    cout << "Há quantos quartos ?" << endl;
    cin >> numQuartos;
    cout << "Qual é o tamanho da area construida ?" << endl;
    cin >> areaConstruida;
    cout << "Qual é o tamanho da area do terreno ?" << endl;
    cin >> areaTerreno;

    Imovel *casa = new Casa(numPavimentos, areaConstruida, numQuartos, areaTerreno, tipoOferta, valor);
    cadastrarImovel(casa);

}
void SistemaImobiliaria::cadastrarApartamento(){

    string posicao;
    int vagasGaragem, numQuartos, tipoOferta;
    double valorCondominio, area, valor;

    Endereco endereco = Endereco();

    cadastrarEndereco(endereco);
    cout << "Deseja vender ou alugar?" << endl;
    cin >> tipoOferta;
    cout << "Qual é o valor do condomínio ?" << endl;
    cin >> valorCondominio;
    cout << "Qual é o valor?" << endl;
    cin >> valor;
    cout << "Em qual posição fica o apartamento?" << endl;
    getline(cin, posicao);
    cout << "Há quantas vagas na Garagem ?" << endl;
    cin >> vagasGaragem;
    cout << "Quantos quartos ?" << endl;
    cin >> numQuartos;
    cout << "Qual é a area ?" << endl;
    cin >> area;


    Imovel *apartamento = new Apartamento(posicao, numQuartos, valorCondominio, vagasGaragem, area, tipoOferta, valor);
    cadastrarImovel(apartamento);

}
void SistemaImobiliaria::cadastrarTerreno(){

    Endereco endereco = Endereco();

    cadastrarEndereco(endereco);

    double area, valor;
    int tipoOferta;

    cout << "Deseja vender ou alugar?" << endl;
    cin >> tipoOferta;
    cout << "Qual é o valor ?" << endl;
    cin >> valor;
    cout << "digite o tamanho da area: " << endl;
    cin >> area;

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
