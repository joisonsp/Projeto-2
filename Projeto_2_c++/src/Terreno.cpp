#include "Terreno.h"

Terreno::Terreno()
{
    area = 0.0;
}

double Terreno::getArea(){
    return area;
}

void Terreno::setArea(double a){
    area = a;
}
