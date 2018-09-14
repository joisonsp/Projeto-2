#ifndef ENDERECO_H
#define ENDERECO_H

#include <string>

class Endereco
{
    public:
        Endereco();

        std::string getLongradouro();
        std::string getCep();
        std::string getCidade();
        std::string getBairro();
        int getNumero();

        void setLongradouro(std::string longradouro);
        void setCep (std::string cep);
        void setCidade (std::string cidade);
        void setBairro(std::string bairro);
        void setNumero(int numero);

    protected:
        std::string longradouro;
        std::string cep;
        std::string cidade;
        std::string bairro;
        int numero;
    private:
};

#endif // ENDERECO_H
