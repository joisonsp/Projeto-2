#ifndef TERRENO_H
#define TERRENO_H

#include "Imovel.h"

class Terreno : public Imovel
{
    public:
        Terreno();
        Terreno(double area);

        double getArea();
        std::string toString();

        void setArea(double area);

    protected:

        double area;

    private:
};

#endif // TERRENO_H
