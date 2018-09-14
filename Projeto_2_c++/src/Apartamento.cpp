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
