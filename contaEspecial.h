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

// ':' estende as funcionalidades de uma determinada classe


// ContaEspecial é uma classe derivada de Conta,
// que herda todas as caracteristicas e funcionalidades
// definidas em conta e em taxa

class ContaEspecial : public Conta, public Taxa
{    
private:
    float limite;
    int tipo = 3;

public:
    ContaEspecial();
    ContaEspecial(int numero, Pessoa &correntista, float saldo, float limite);
    ~ContaEspecial();

    int getTipo() const override;

    float getLimite();
    void setLimite(float valor);

    virtual bool sacar(float valor) override;
    
    virtual float getTaxaManutencao() override;
    virtual void descontarTaxaManutencao() override;
    
};

#endif