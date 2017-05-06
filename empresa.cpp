#include<iostream>
using std::cout;
using std::endl;
#include"empresa.h"
#include"funcionario.h"

#include <istream>
using std::istream;

string Empresa::getNome(){
    return nome;
}
void Empresa::setNome(string n){
    nome=n;
}
string Empresa::getCnpj(){
    return CNPJ;
}
void Empresa::setCnpj(string c){
    CNPJ=c;
}
Funcionario *Empresa::getFuncionarios(){
    return funcionarios;
}
istream& operator>>(istream& is, Empresa &emp) {
	is >> emp.nome;
    cout<<"Digite o CNPJ: "<<endl;
    is >> emp.CNPJ;
	return is;
}