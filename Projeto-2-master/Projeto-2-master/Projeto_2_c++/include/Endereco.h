#ifndef ENDERECO_H
#define ENDERECO_H

#include <sstream>
#include <string>

class Endereco
{
    public:
        Endereco();
        Endereco(std::string logradouro, std::string bairro, std::string cidade, std::string cep, int numero);

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
        std::string toString();

   // protected:
        std::string longradouro;
        std::string cep;
        std::string cidade;
        std::string bairro;
        int numero;
    private:
};

#endif // ENDERECO_H
