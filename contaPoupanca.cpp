#include "contaPoupanca.h"

ContaPoupanca::ContaPoupanca(int numero, Pessoa &correntista, float saldo): 
Conta(numero,correntista,saldo){
}

ContaPoupanca::~ContaPoupanca()
{
}

int ContaPoupanca::getTipo() const {
    return tipo;
}