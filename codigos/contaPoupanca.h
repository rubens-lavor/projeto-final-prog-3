#ifndef CONTAPOUPANCA_H
#define CONTAPOUPANCA_H

#include "conta.h"
#include "taxa.h"

class ContaPoupanca: public Conta, public Taxa
{
private:
public:
    ContaPoupanca(int numero, Pessoa &correntista, float saldo);
    ~ContaPoupanca();

    //int getTipo() const override;
    virtual void info() const override;

    virtual void incremento_juros() override;
    
    //float getTaxaManutencao() override{return 2.00;};
    virtual void descontarTaxaManutencao() override{};
};


#endif