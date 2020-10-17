#ifndef CONTACOMUM_H
#define CONTACOMUM_H

#include "conta.h"
#include "taxa.h"

class ContaComum : public Conta, public Taxa
{
private:
    /* data */
public:

    ContaComum();
    ContaComum(int numero, Pessoa *correntista, float saldo/*, float valor*/);
    ~ContaComum();

    virtual bool sacar(float valor) override;

    virtual float getTaxaManutencao() override;
    virtual void descontarTaxaManutencao() override;
    //virtual void descontarTaxaManutencao(Conta *_conta) override;

};

#endif
