#include<iostream>
using std::cout;
using std::endl;
#include"funcionario.h"
#include"empresa.h"
#include<fstream>
using std::ifstream;
using std::ofstream;
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
	//is >> funcionarios.name;
    getline(is, funcionarios.name, ';');
    //is >> funcionarios.salario;
    getline(is, funcionarios.salario, ';');
    //is >> funcionarios.datadia;
    getline(is, funcionarios.datadia, '/');
    //is >> funcionarios.datames;
    getline(is, funcionarios.datames, '/');
    //is >> funcionarios.dataano;
    getline(is, funcionarios.dataano);
	return is;
}
ostream& operator<<(ostream& os, Funcionario &funcionarios) {
	os << "     Nome: " << funcionarios.name;
	os << "     Salario: " << funcionarios.salario;
    os << "     Data de admissao: " << funcionarios.datadia <<"/"<< funcionarios.datames<<"/"<<funcionarios.dataano<<endl;
	return os;
}