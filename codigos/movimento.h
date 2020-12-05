#ifndef MOVIMENTO_H
#define MOVIMENTO_H

#include "conta.h"
#include "date.h"

// relação do tipo agregação entre as classes
// movimento e conta

class Movimento
{
private:
    Date data;
    Conta conta;
    string historico;
    float valor;
    float saldoAnterior;
    int operacao;

public:
    Movimento(Date data, Conta &conta, string historico, float valor, int operacao, float saldoAnterior);
    ~Movimento();

    void setData(Date data);
    Date getData();

    void setConta(Conta conta);
    Conta getConta();

    void setHistorico(string historico);
    string getHistorico();

    void setValor(float valor);
    float getValor();

    void setSaldoAnterior(float saldoAnterior);
    float getSaldoAnterior();   

    void setOperacao(int operacao);
    int getOperacao();

    /*retorna true se a operação foi realizada com sucesso*/
    bool movimentar();  

    //void extrato(Conta) const;


};

#endif