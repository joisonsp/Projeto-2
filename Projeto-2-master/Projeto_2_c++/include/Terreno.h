#ifndef TERRENO_H
#define TERRENO_H

#include "Imovel.h"

class Terreno : public Imovel
{
    public:
        Terreno();

        double getArea();

        void setArea(double a);

    protected:

        double area;

    private:
};

#endif // TERRENO_H
