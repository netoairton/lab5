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
    string out;
    //float aumento;
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
                getline(entrada, null); //descartando o cabeçalho

                for(int j=0; j<emp[i].getQtd(); j++){
                    entrada>>funcionarios[j];
                }

                cout<<"Deseja imprimir os funcionarios desta empresa? (4)Nao (5)Sim: ";
                cin>>opcao;
                if(opcao==5){
                    for(int j=0; j<emp[i].getQtd(); j++){
                        cout<<funcionarios[j];
                    }
                }
                opcao=0;

                /*cout<<"Deseja dar aumento aos funcionários? (2)Nao (3)Sim: ";
                cin>>opcao;
                if(opcao==3){
                    cout<<"De quantas vezes deseja o aumento? (ex: 3.5 vezes) : ";
                    cin>>aumento;
                    for(int j=0; j<emp[i].getQtd(); j++){
                        funcionarios[j].aumentar(aumento);
                    }
                    opcao=0;
                }*/     //Não está funcionando
                /*else{*/
                    cout<<"Deseja gravar os dados em um arquivo? (8)Nao (9)Sim: ";
                    cin>>opcao;
                    if(opcao==9){
                        cout<<"Digite o nome do arquivo: ";
                        cin>>out;
                        ofstream saida(out, std::ios::app);
                        for(int j=0; j<emp[i].getQtd(); j++){
                            saida<<funcionarios[j];
                        }
                    }
                //}

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