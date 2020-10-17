#ifndef MOVIMENTO_H
#define MOVIMENTO_H

#include "conta.h"
#include "date.h"

class Conta;
class Date;

// relação do tipo agregação entre as classes
// movimento e conta
// quando uma classe utiliza os componentes de outras
// classes..
// o que são componentes de uma classe???

class Movimento
{
private:
    Date data;
    Conta conta; //aparentemente não preciso usar ponteiro
    string historico;
    float valor;
    float saldoAnterior;
    int operacao;

public:
    Movimento(Date data, Conta conta, string historico, float valor, int operacao);
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

    bool movimentar();  


};

#endif