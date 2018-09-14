#ifndef CASA_H
#define CASA_H

#include "Imovel.h"

class Casa : public Imovel
{
    public:

        Casa();
        int getNumPavimentos();
        int getNumQuartos();
        double getAreaTerreno();
        double getAreaConstruida();

        void setNumPavimentos(int nPavimento);
        void setNemPavimentos(int nQuartos);
        void setAreaTerreno(double aTerreno);
        void setAreaConstruida(double aConstruida);

    protected:

        int numPavimentos;
        int numQuartos;
        double areaTerreno;
        double areaConstruida;
};

#endif // CASA_H
