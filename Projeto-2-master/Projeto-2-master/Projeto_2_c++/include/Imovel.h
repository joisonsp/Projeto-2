#ifndef IMOVEL_H
#define IMOVEL_H

#include "Endereco.h"

class Imovel
{
    public:
        Imovel();
        Imovel(int tipoOferta, double valor);

        int getIMOVEL_PARA_VENDER();
        int getIMOVEL_PARA_ALUGAR();
        int getTipoOferta();
        int getCategoria();
        double getValor();
        Endereco getEndereco();

        void setIMOVEL_PARA_VENDER(int IMOVEL_PARA_VENDER);
        void setIMOVEL_PARA_ALUGAR(int IMOVEL_PARA_ALUGAR);
        void setTipoOferta(int tipoOferta);
        void setValor(double valor);
        void setEndereco(Endereco endereco);
        virtual std::string toString() = 0;

    protected:
        int IMOVEL_PARA_VENDER;
        int IMOVEL_PARA_ALUGAR;
        int tipoOferta;
        int categoria;
        double valor;
        Endereco endereco;

    private:
};

#endif // IMOVEL_H
