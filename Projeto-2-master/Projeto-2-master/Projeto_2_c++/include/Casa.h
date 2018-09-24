#ifndef CASA_H
#define CASA_H

#include "Imovel.h"

class Casa : public Imovel
{
    public:

        Casa();
        Casa(int numPavimentos, double areaConstruida, int numQuartos, double areaTerreno, int tipoOferta, double valor);

        int getNumPavimentos();
        int getNumQuartos();
        double getAreaTerreno();
        double getAreaConstruida();

        void setNumPavimentos(int nPavimento);
        void setNemPavimentos(int nQuartos);
        void setAreaTerreno(double aTerreno);
        void setAreaConstruida(double aConstruida);
        void setEndereco(Endereco ende);
        std::string toString();

    protected:

        int numPavimentos;
        int numQuartos;
        double areaTerreno;
        double areaConstruida;
};

#endif // CASA_H
