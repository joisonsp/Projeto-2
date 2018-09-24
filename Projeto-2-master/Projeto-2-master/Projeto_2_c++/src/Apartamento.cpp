#include "Apartamento.h"

using namespace std;

Apartamento::Apartamento()
{
    posicao = " ";
    numQuartos = 0;
    valorCondominio = 0.0;
    vagasGaragem = 0;
    area = 0.0;
}

Apartamento::Apartamento(string posicao, int numQuartos, double valorCondominio, int vagasGaragem, double area, int tipoOferta, double valor){

    categoria = 2;
    setPosicao(posicao);
    setNumQuartos(numQuartos);
    setValorCondominio(valorCondominio);
    setVagasGaragem(vagasGaragem);
    setArea(area);
    setTipoOferta(tipoOferta);
    setValor(valor);

}

string Apartamento::getPosicao(){
    return posicao;
}
int Apartamento::getNumQuartos(){
    return numQuartos;
}
double Apartamento::getValorCondominio(){
    return valorCondominio;
}
int Apartamento::getVagasGaragem(){
    return vagasGaragem;
}
double Apartamento::getArea(){
    return area;
}

void Apartamento::setPosicao(string pos){
    posicao = pos;
}
void Apartamento::setNumQuartos(int nQuartos){
    numQuartos = nQuartos;
}
void Apartamento::setValorCondominio(double vCondominio){
    valorCondominio = vCondominio;
}
void Apartamento::setVagasGaragem(int vGaragem){
    vagasGaragem = vGaragem;
}
void Apartamento::setArea(double a){
    area = a;
}

std::string Apartamento::toString(){

    std::stringstream a, p, vC, vG, nQ;
    std::string linha;

    p << posicao;
    vC << valorCondominio;
    vG << vagasGaragem;
    a << area;
    nQ << numQuartos;


    linha = endereco.toString()+"\n"+p.str()+"\n"+ vC.str()+"\n"+vG.str()+"\n"+a.str()+"\n"+nQ.str();

    return linha;
}
