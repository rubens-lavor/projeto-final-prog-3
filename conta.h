#ifndef CONTA_H
#define CONTA_H
#include <iostream>
#include <string>
using namespace std;

#include "pessoa.h"

/* 
A classe Conta define um tipo de dado abstrato
para a criação criação da estrutura de classes de
contas bancárias

*/





class Pessoa; // se eu tirar o identificador do tipo não é definido
//verificar o pq da razão de se colocar o class Pessoa

class Conta
{
private:
    static int contasCriadas; //contador de objetos da classe Conta
    string senha="";
    int tipo = 0;
    /*
    static int DEPOSITAR;
    static int SACAR;
    */
    
protected:

    /*
    o atributo número é utilizado para referenciar o número da conta.
    */
    int numero;

    /*
    o atributo correntista, do tipo Pessoa é utilizado para referenciar um correntista.
    */
    Pessoa *correntista;

    /*
    o atributo saldo é utilizado para referenciar o saldo da conta.
    */
    float saldo{};


public:

    /*
    Construtor padão da Classe Conta
    */
    Conta();


    /*
    Construtor sobrecarregado da classe Conta
    Uso:
        Conta *conta = new ContaComum(12346,pessoa,150,10);
    Parametros:
        int numero, Pessoa correntista, float saldo, float valor
    Onde:
        numero -> inteiro que identifica o número da conta
        correntista -> objeto do tipo Pessoa que identifica o correntista da conta
        saldo -> float que identifica o saldo inicial
        valor -> float que identifica... 
    */
    Conta(int numero, Pessoa &correntista, float saldo, string senha = "123");

    virtual ~Conta();

    bool validacao (string chave) const;

    int getNumero();
    void setNumero(int num);
    
    
    Pessoa getCorrentista();
    void setCorrentista(Pessoa &correntista);
    
    float getSaldo();
    void setSaldo(float saldo);

    void depositar(float valor);
    virtual int getTipo () const;
    virtual bool sacar(float valor); 
    // é um método polimorfico


    /*
        Exemplo:

        struct Base { 
            virtual void foo() {} 
        };
        struct Derived: Base { 
            void foo() override {} 
        };

    */
    bool movimentar(float valor, int operacao);   
    int getNumeroTotalDeContas();

};


#endif
