#ifndef APARTAMENTO_H
#define APARTAMENTO_H

#include <string>
#include "Imovel.h"

class Apartamento : public Imovel
{
    public:
        Apartamento();
        Apartamento(std::string posicao, int numQuartos, double valorCondominio, int vagasGaragem, double area, int tipoOferta, double valor);

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
        std::string toString();

    protected:

        std::string posicao;
        int numQuartos;
        double valorCondominio;
        int vagasGaragem;
        double area;
};

#endif // APARTAMENTO_H
