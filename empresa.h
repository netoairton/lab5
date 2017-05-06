#ifndef EMPRESA_H
#define EMPRESA_H

#include <string>
using std::string;

#include <istream>
using std::istream;

#include"funcionario.h"

class Empresa{
    private:
    string nome;
    string CNPJ;
    Funcionario *funcionarios;
    int qtd;

    public:
    string getNome();
    void setNome(string n);
    string getCnpj();
    void setCnpj(string c);
    Funcionario *getFuncionarios();
    friend istream& operator>>(istream& is, Empresa &emp);
    
};

#endif