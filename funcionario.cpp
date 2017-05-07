#include<iostream>
using std::cout;
using std::endl;
#include"funcionario.h"
#include"empresa.h"
#include <istream>
using std::istream;
#include <ostream>
using std::ostream;
Funcionario::Funcionario() {
    name = "";
    salario = "";
    datadia = "";
    datames = "";
    dataano = "";
}
string Funcionario::getName(){
    return name;
}
void Funcionario::setName(string n){
    name=n;
}
string Funcionario::getSalario(){
    return salario;
}
void Funcionario::setSalario(string s){
    salario=s;
}
string Funcionario::getDatadia(){
    return datadia;
}
void Funcionario::setDatadia(string dd){
    datadia=dd;
}
string Funcionario::getDatames(){
    return datames;
}
void Funcionario::setDatames(string dm){
    datames=dm;
}
string Funcionario::getDataano(){
    return dataano;
}
void Funcionario::setDataano(string da){
    dataano=da;
}
istream& operator>>(istream& is, Funcionario &funcionarios) {
	is >> funcionarios.name;
    cout<<"     Digite o salario: ";
    is >> funcionarios.salario;
    cout<<"     Digite a data de admissao: Dia:";
    is >> funcionarios.datadia;
    cout<<"     Mes:";
    is >> funcionarios.datames;
    cout<<"     Ano:";
    is >> funcionarios.dataano;
	return is;
}
ostream& operator<<(ostream& os, Funcionario &funcionarios) {
	os << "     Nome: " << funcionarios.name;
	os << "     Salario: " << funcionarios.salario;
    os << "     Data de admissao: " << funcionarios.datadia <<"/"<< funcionarios.datames<<"/"<<funcionarios.dataano<<endl;
	return os;
}