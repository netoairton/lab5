#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include<string>
using std::string;
#include <istream>
using std::istream;
#include <ostream>
using std::ostream;
class Funcionario{
    private:
        string name;
        string salario;
        string datadia;
        string datames;
        string dataano;
    public:
        //Funcionario(int tamanho);
        Funcionario();
        string getName();
        void setName(string n);
        string getSalario();
        void setSalario(string s);
        string getDatadia();
        void setDatadia(string dd);
        string getDatames();
        void setDatames(string dm);
        string getDataano();
        void setDataano(string da);
        friend istream& operator>>(istream& is, Funcionario &funcionarios);
        friend ostream& operator<<(ostream& os, Funcionario &funcionarios);
};

#endif