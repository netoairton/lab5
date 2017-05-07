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
int Empresa::getQtd(){
    return qtd;
}
void Empresa::setQtd(int q){
    qtd=q;
}
Funcionario *Empresa::getFuncionarios(){
    return funcionarios;
}
void Empresa::setFuncionarios(Funcionario *f) {
    //Funcionario *funcionarios= new Funcionario[qtd];
    for(int i = 0; i < qtd; i++) {
        funcionarios[i].setName(f[i].getName());
        funcionarios[i].setSalario(f[i].getSalario());
        funcionarios[i].setDatadia(f[i].getDatadia());
        funcionarios[i].setDatames(f[i].getDatames());
        funcionarios[i].setDataano(f[i].getDataano());
    }
}
istream& operator>>(istream& is, Empresa &emp) {
	is >> emp.nome;
    cout<<" Digite o CNPJ: ";
    is >> emp.CNPJ;
    cout<<" Digite a quantidade de funcionáros: ";
    is >> emp.qtd;
	return is;
}