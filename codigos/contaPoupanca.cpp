#include "contaPoupanca.h"

ContaPoupanca::ContaPoupanca(int _numero, Pessoa &_correntista, float _saldo): 
Conta(_numero,_correntista,_saldo){
}

ContaPoupanca::~ContaPoupanca()
{
}

int ContaPoupanca::getTipo() const {
    return tipo;
}