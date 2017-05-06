#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include<string>
using std::string;
class Funcionario{
    private:
        string nome;
        float salario;
        string data;
    public:
        //Funcionario(int tamanho);
        string getNome();
        void setNome(string n);
        float getSalario();
        void setSalario(float s);
        string getData();
        void setData(string d);
};

#endif