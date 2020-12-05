#ifndef CONTAPOUPANCA_H
#define CONTAPOUPANCA_H

#include "conta.h"
#include "taxa.h"

class ContaPoupanca : public Conta, public Taxa {
   private:
   public:
    ContaPoupanca(int numero, Pessoa &correntista, float saldo);
    ~ContaPoupanca();

    /*
     - método mostra no terminal informações referentes a determinada conta poupança
    */
    virtual void info() const override;

    /*
        incremento_juros() reajusta o valor do saldo de acordo com o juros
    */
    virtual void incremento_juros() override;

    /*
     - é necessário implementar descontarTaxaManutencao(), senão a classe ContaPoupanca se torna abstrata
     - isso não convém porque a classe ContaPoupanca precisa ser instanciada.
     - como não há taxa manutencao na conta poupança a função não realiza operação nessa classe.
    */
    virtual void descontarTaxaManutencao() override{};
};

#endif