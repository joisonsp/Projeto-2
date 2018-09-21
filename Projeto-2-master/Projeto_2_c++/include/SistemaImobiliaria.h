#ifndef SISTEMAIMOBILIARIA_H
#define SISTEMAIMOBILIARIA_H

#include "Casa.h"
#include "Imovel.h"
#include <string>
#include "Endereco.h"
#include <iostream>
#include <list>

class SistemaImobiliaria
{
    public:

        SistemaImobiliaria();
        void cadastrarImovel(Imovel* imovel);
        void cadastrarCasa();
        void cadastrarApartamento();
        void cadastrarTerreno();
        std::list<Imovel*> getImoveis();
        std::list<std::string> getDescricaoImoveis();
        void getImoveisPorTipo(int tipo);
        std::list<Imovel*> getImoveisParaAlugarPorBairro(std::string bairro);
        std::list<Imovel*> getImoveisParaVenderPorBairro(std::string bairro);
        std::list<Imovel*> getImoveisPorCidade(std::string bairro);
    protected:

    private:
        std::list<Imovel*> imoveis;
        void cadastrarEndereco(Endereco &endereco);
};

#endif // SISTEMAIMOBILIARIA_H

