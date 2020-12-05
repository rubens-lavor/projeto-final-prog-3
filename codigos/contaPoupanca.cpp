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

void ContaPoupanca::info() const {
    cout << "Número da conta...........: " << this->numero << endl;
    cout << "Correntista...............: " << this->correntista->getNome() << endl;
    cout << "Saldo.....................: " << this->saldo << endl;
    cout << "E-mail....................: " << this->correntista->getEmail() << endl;
}