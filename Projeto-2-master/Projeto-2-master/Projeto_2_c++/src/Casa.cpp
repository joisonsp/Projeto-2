#include "Casa.h"
#include <sstream>
 using namespace std;
Casa::Casa()
{
    numPavimentos = 0;
    numQuartos = 0;
    areaTerreno = 0.0;
    areaConstruida = 0.0;
}

Casa::Casa(int numPavimentos, double areaConstruida, int numQuartos, double areaTerreno, int tipoOferta, double valor){
    categoria = 1;
    setNumPavimentos(numPavimentos);
    setNemPavimentos(numQuartos);
    setAreaTerreno(areaTerreno);
    setAreaConstruida(areaConstruida);
    setTipoOferta(tipoOferta);
    setValor(valor);

}

int Casa::getNumPavimentos(){
    return numPavimentos;
}
int Casa::getNumQuartos(){
    return numQuartos;
}
double Casa::getAreaTerreno(){
    return areaTerreno;
}
double Casa::getAreaConstruida(){
    return areaConstruida;
}

void Casa::setNumPavimentos(int nPavimento){
    numPavimentos = nPavimento;
}
void Casa::setNemPavimentos(int nQuartos){
    numQuartos = nQuartos;
}
void Casa::setAreaTerreno(double aTerreno){
    areaTerreno = aTerreno;
}
void Casa::setAreaConstruida(double aConstruida){
    areaConstruida = aConstruida;
}

void Casa::setEndereco(Endereco ende){

}

std::string Casa::toString(){

    std::stringstream nP, nQ, aT, aC;
    std::string linha;

    nP << numPavimentos;
    nQ << numQuartos;
    aT << areaTerreno;
    aC << areaConstruida;


    linha = endereco.toString()+"\n"+nP.str()+"\n"+ nQ.str()+"\n"+aT.str()+"\n"+aC.str();
    return linha;
}
