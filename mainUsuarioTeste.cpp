#include <iostream>
#include <stdexcept>

#include "Conta.h"
#include "Conta.cpp"
#include "Pessoa.cpp"
#include "ContaEspecial.cpp"
#include "ContaComum.cpp"
#include "ContaPoupanca.cpp"
#include "Taxa.cpp"
#include "Transacao.cpp"
#include "Movimento.cpp"
#include "Date.cpp"

using namespace std;

int main(){
    int numero;
    string nome, email, opcao;
    float saldo, valorDeposito;



    cout<< "Informe o Número da conta...: ";
    cin >> numero;
    cin.ignore(5,'\n');
    cout << endl;

    cout << "Correntista................: ";
    //cin >> nome;
    cin.ignore();
    getline( cin, nome );
    cout << endl;
    //cin.ignore(5,'\n');//pega 256 caracteres e para
    //ou qnd atingir o limite ou encontrar uma quebra de linha


    cout << "E-mail.....................: ";
    //cin >> email;
    cin.ignore();
    getline( cin, nome );
    cout<<endl;

    cout << "Saldo Inicial..............: ";
    cin >> saldo;    
    cout<<endl;

    cout << "Informe o valor do Depósito: ";
    cin >> valorDeposito;    
    cout<<endl;


    


    Pessoa *p1 = new Pessoa(nome,email);

    Conta *contacomum1 = new ContaComum(numero,p1,saldo);
    //Conta *contacomum1 = new ContaComum(numero,new Pessoa(nome,email),saldo);
    

    contacomum1->depositar(valorDeposito);

    //cout << "Saldo Atual :" << contacomum1->getSaldo() << endl;
    

    return 0;
}