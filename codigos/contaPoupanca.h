#ifndef CONTAPOUPANCA_H
#define CONTAPOUPANCA_H

#include "conta.h"

class ContaPoupanca: public Conta
{
private:
    int tipo = 2;
public:
    ContaPoupanca(int numero, Pessoa &correntista, float saldo);
    ~ContaPoupanca();

    int getTipo() const override;
    void info() const;
};


#endif