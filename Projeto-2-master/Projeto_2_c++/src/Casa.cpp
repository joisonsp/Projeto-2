#include "Casa.h"

Casa::Casa()
{
    numPavimentos = 0;
    numQuartos = 0;
    areaTerreno = 0.0;
    areaConstruida = 0.0;
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
