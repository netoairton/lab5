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
    int opcao; //opcao de impressao ou adicao...
    cout<<"Deseja adicionar empresas? (0)Nao (1)Sim: ";
    cin>>opcao;
    if(opcao==1){
        cout<<"Digite quantas empresas: ";
        cin>>Qempresas;
        Empresa *emp= new Empresa[Qempresas];
        cout<<"Digite as empresas:"<<endl;
        for(int i=0; i<Qempresas; i++){
            cout<<" Nome da empresa "<<i+1<<" : ";
            cin>>emp[i];
            Funcionario *funcionarios= new Funcionario[emp[i].getQtd()];
            for(int j=0; j<emp[i].getQtd(); j++){
                cout<<"     Nome do funcionario "<<j+1<<" : ";
                cin>>funcionarios[j];
            }
            cout<<"Deseja imprimir os funcionários desta empresa? (3)Nao (4)Sim: ";
            cin>>opcao;
            if(opcao==4){
                for(int j=0; j<emp[i].getQtd(); j++){
                    cout<<funcionarios[j];
                }
            }
            opcao=0;
        }
    }
    else {
        cout<<endl;
        cout<<"Encerrando o programa"<<endl;
        cout<<endl;
    }
    //Funcionario *funcionarios= new Funcionario[qtd];
    //emp[0].funcionario[0].setName("joao");
    //cout<<emp[0].getFuncionarios.getName<<endl;
    
    
    return 0;
}