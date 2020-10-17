
#include "Movimento.h"

Movimento::Movimento(Date data, Conta conta, 
        string historico, float valor, int operacao)
{   this->conta = conta;
    this->historico = historico;
    this->valor = valor;
    this->operacao = operacao;
    this->data = data;
    
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

Movimento::~Movimento()
{
}

void Movimento::setData(Date data){
    this->data = data;
}

Date Movimento::getData(){
    return data;
}

void Movimento::setConta(Conta conta){
    this->conta = conta;
}

Conta Movimento::getConta(){
    return conta;
}

void Movimento::setHistorico(string historico){
    this->historico = historico;
}

string Movimento::getHistorico(){
    return historico;
}

void Movimento::setValor(float valor){
    this->valor = valor;
}

float Movimento::getValor(){
    return valor;
}

void Movimento::setSaldoAnterior(float saldoAnterior){
    this->saldoAnterior = saldoAnterior;
}

float Movimento::getSaldoAnterior(){
    return saldoAnterior;
}

void Movimento::setOperacao(int operacao){
    this->operacao = operacao;
}

int Movimento::getOperacao(){
    return operacao;
}

bool Movimento::movimentar(){
    this->saldoAnterior = conta.getSaldo();
    if (operacao == 0) //sacar
    {
        return this->conta.movimentar(this->valor,this->operacao);
    }else if (operacao == 1) //depositar
    {
        this->conta.movimentar(this->valor,this->operacao);
        return true;
    }
    return false;
    
}
