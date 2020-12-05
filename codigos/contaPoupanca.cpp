#include "contaPoupanca.h"

ContaPoupanca::ContaPoupanca(int _numero, Pessoa &_correntista, float _saldo): 
Conta(_numero,_correntista,_saldo){
}

ContaPoupanca::~ContaPoupanca()
{
}

/*
int ContaPoupanca::getTipo() const {
    return tipo;
}
*/

void ContaPoupanca::info() const {
    cout << "Conta Poupança" << endl;
    cout << "Número....................: " << this->numero << endl;
    cout << "Correntista...............: " << this->correntista->getNome() << endl;
    cout << "Saldo.....................: " << this->saldo << endl;
    //cout << "E-mail....................: " << this->correntista->getEmail() << endl;
}

void ContaPoupanca::incremento_juros(){
    this->saldo *= this->getTaxa_juros_poupanca();
}