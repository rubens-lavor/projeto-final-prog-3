#include "movimento.h"

Movimento::Movimento(Date _data, Conta _conta,
                     string _historico, float _valor, int _operacao,float _saldoAnterior) {
    this->conta = _conta;
    this->historico = _historico;
    this->valor = _valor;
    this->operacao = _operacao;
    this->data = _data;
    this->saldoAnterior = _saldoAnterior;

    /*
    cout <<"contrutor Movimento" <<endl;
    if (operacao == 0)
    {
        conta.movimentar(valor,operacao);
    }else
    {
        conta.movimentar(valor,operacao);
    }
    */
}

Movimento::~Movimento() {
}

void Movimento::setData(Date _data) {
    this->data = _data;
}

Date Movimento::getData() {
    return data;
}

void Movimento::setConta(Conta _conta) {
    this->conta = _conta;
}

Conta Movimento::getConta() {
    return conta;
}

void Movimento::setHistorico(string _historico) {
    this->historico = _historico;
}

string Movimento::getHistorico() {
    return historico;
}

void Movimento::setValor(float _valor) {
    this->valor = _valor;
}

float Movimento::getValor() {
    return valor;
}

void Movimento::setSaldoAnterior(float _saldoAnterior) {
    this->saldoAnterior = _saldoAnterior;
}

float Movimento::getSaldoAnterior() {
    return saldoAnterior;
}

void Movimento::setOperacao(int _operacao) {
    this->operacao = _operacao;
}

int Movimento::getOperacao() {
    return operacao;
}

bool Movimento::movimentar() {
    this->saldoAnterior = conta.getSaldo();
    if (operacao == 0)  //sacar
    {
        return this->conta.movimentar(this->valor, this->operacao);
    } else if (operacao == 1)  //depositar
    {
        this->conta.movimentar(this->valor, this->operacao);
        return true;
    }
    return false;
}