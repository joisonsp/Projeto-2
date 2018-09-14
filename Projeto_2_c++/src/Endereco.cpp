#include "Endereco.h"

using namespace std;

Endereco::Endereco()
{
    longradouro = " ";
    cep =  " ";
    cidade = " ";
    bairro = " ";
    numero = 0;
}

string Endereco::getLongradouro(){
    return longradouro;
}
string Endereco::getCep(){
    return cep;
}
string Endereco::getCidade(){
    return cidade;
}
string Endereco::getBairro(){
    return bairro;
}
int Endereco::getNumero(){
    return numero;
}

void Endereco::Endereco::setLongradouro(string longradouro){
    longradouro = this->longradouro;
}
void Endereco::setCep (string cep){
    cep = this->cep;
}
void Endereco::setCidade (string cidade){
    cidade = this->cidade;
}
void Endereco::setBairro(string bairro){
    bairro = this->bairro;
}
void Endereco::setNumero(int numero){
    numero = this->numero;
}
