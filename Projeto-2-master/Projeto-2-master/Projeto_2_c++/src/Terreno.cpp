#include "Terreno.h"

Terreno::Terreno()
{
    area = 0.0;
}

Terreno::Terreno(double area){

    categoria = 3;
    setArea(area);
}

std::string Terreno::toString(){
    std::stringstream a;
    std::string linha;
    a << area;

    linha = endereco.toString()+"\n"+a.str();

    return linha;
}

double Terreno::getArea(){
    return area;
}

void Terreno::setArea(double area){
    this->area = area;
}
