#include<iostream>
using std::cout;
using std::cin;
using std::endl;

#include<string>
using std::string;

#include"empresa.h"
#include"funcionario.h"

int main(){
    int Qempresas;
    cout<<"Digite quantas empresas: ";
    cin>>Qempresas;
    Empresa *emp= new Empresa[Qempresas];
    cout<<"Digite as empresas:"<<endl;
    for(int i=0; i<Qempresas; i++){
        cout<<"Nome da empresa "<<i+1<<" : "<<endl;
        cin>>emp[i];
    }
    for(int i=0; i<Qempresas; i++){
        cout<<emp[i].getNome()<<endl;
        cout<<emp[i].getCnpj()<<endl;
    }
    
    return 0;
}