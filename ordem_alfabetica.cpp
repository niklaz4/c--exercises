//Crie um progama capaz de ler dois nomes de pessoas e imprimi-los em ordem alfabética. Faça isto com string de C e de C++

#include<iostream>
#include<string>
using namespace std;

int main(){
    string nome1, nome2;
    
    cout << "Insira o primeiro nome: ";
    cin >> nome1;

    cout << "\nInsira o segundo nome: ";
    cin >>nome2;

    if(nome1 < nome2){
        cout << "Em ordem alfabetica: " << nome1 << ", " << nome2 << endl;
    }
    else if (nome1 > nome2){
        cout << "Em ordem alfabetica: " << nome2 << ", " << nome1 << endl;
    }
    else{
        cout << "Os nomes são iguais: " << nome1 << endl; 
    }
    return 0;
}