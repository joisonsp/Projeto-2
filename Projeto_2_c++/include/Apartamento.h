#ifndef APARTAMENTO_H
#define APARTAMENTO_H

#include <string>
#include "Imovel.h"

class Apartamento : public Imovel
{
    public:
        Apartamento();

        std::string getPosicao();
        int getNumQuartos();
        double getValorCondominio();
        int getVagasGaragem();
        double getArea();

        void setPosicao(std::string pos);
        void setNumQuartos(int nQuartos);
        void setValorCondominio(double vCondominio);
        void setVagasGaragem(int vGaragem);
        void setArea(double a);

    protected:

        std::string posicao;
        int numQuartos;
        double valorCondominio;
        int vagasGaragem;
        double area;
};

#endif // APARTAMENTO_H
