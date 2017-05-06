#include"funcionario.h"
string Funcionario::getNome(){
    return nome;
}
void Funcionario::setNome(string n){
    nome=n;
}
float Funcionario::getSalario(){
    return salario;
}
void Funcionario::setSalario(float s){
    salario=s;
}
string Funcionario::getData(){
    return data;
}
void Funcionario::setData(string d){
    data=d;
}