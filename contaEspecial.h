#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H

#include "conta.h"
#include "taxa.h" // importa a classe Taxa

/*

#include<iostream>
#include "Conta.cpp"
class Conta;
class Pessoa;

*/

// ':' extende as funcionalidades de uma determinada classe
// neste nós estamos criando uma extensão da classe Conta
// denominada classe ContaEspecial

// ContaEspecial é uma classe derivada de Conta,
// que herda todas as caracteristicas e funcionalidades
// definidas em conta

class ContaEspecial : public Conta, public Taxa
{    
private:
    float limite;

public:
    ContaEspecial();
    ContaEspecial(int numero, Pessoa *correntista, float saldo, float limite);
    
    float getLimite();
    void setLimite(float valor);

    virtual bool sacar(float valor) override;
    
    virtual float getTaxaManutencao() override;
    virtual void descontarTaxaManutencao() override;
    
};

#endif