#include<iostream>
using std::cout;
using std::cin;
using std::endl;

#include<string>
using std::string;

#include<fstream>
using std::ifstream;
using std::ofstream;

#include"empresa.h"
#include"funcionario.h"

int main(){
    int Qempresas;
    int opcao; //opcao de impressao ou adicao...
    string entry;
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
            if(emp[i].getQtd() > 0){

                cout<<"Digite o arquivo de entrada: ";
                cin >> entry;

                ifstream entrada(entry);
                if(!entrada){
                    cout<<"O arquivo de entrada nao pode ser aberto."<<endl;
                    return 0;
                }
                string null;
                getline(entrada, null);
                for(int j=0; j<emp[i].getQtd(); j++){
                    entrada>>funcionarios[j];
                }

                cout<<"Deseja imprimir os funcionarios desta empresa? (3)Nao (4)Sim: ";
                cin>>opcao;
                if(opcao==4){
                    for(int j=0; j<emp[i].getQtd(); j++){
                        cout<<funcionarios[j];
                    }
                }
                opcao=0;
                entry="";
                entrada.close();
            }
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