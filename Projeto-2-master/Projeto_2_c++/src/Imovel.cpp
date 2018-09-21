#include "Imovel.h"

Imovel::Imovel()
{
    IMOVEL_PARA_VENDER = 0;
    IMOVEL_PARA_ALUGAR = 0;
    tipoOferta = 0;
    valor = 0.0;
}

int Imovel::getIMOVEL_PARA_VENDER(){
    return IMOVEL_PARA_VENDER;
}

int Imovel::getIMOVEL_PARA_ALUGAR(){
    return IMOVEL_PARA_ALUGAR;
}

int Imovel::getTipoOferta(){
    return tipoOferta;
}

double Imovel::getValor(){
    return valor;
}

Endereco Imovel::getEndereco(){
    return endereco;
}

void Imovel::setIMOVEL_PARA_VENDER(int IMOVEL_PARA_VENDER){
    IMOVEL_PARA_VENDER = this -> IMOVEL_PARA_VENDER;
}

void Imovel::setIMOVEL_PARA_ALUGAR(int IMOVEL_PARA_ALUGAR){
    IMOVEL_PARA_ALUGAR = this -> IMOVEL_PARA_ALUGAR;
}

void Imovel::setTipoOferta(int tipoOferta){
    tipoOferta = this -> tipoOferta;
}

void Imovel::setValor(double valor){
    valor = this -> valor;
}

void Imovel::setEndereco(Endereco endereco){
    endereco = this -> endereco;
}
