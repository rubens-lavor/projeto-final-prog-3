#include "contaEspecial.h"

ContaEspecial::ContaEspecial() {
}

ContaEspecial::~ContaEspecial() {
}

ContaEspecial::ContaEspecial(int _numero, Pessoa &_correntista, float _saldo, float _limite) : Conta(_numero, _correntista, _saldo) {
    this->setLimite(_limite);
    this->limiteAtual = _limite;
}

/*
int ContaEspecial::getTipo() const{
    return tipo;
}
*/

float ContaEspecial::getLimite() {
    return this->limite;
}

void ContaEspecial::setLimite(float valor) {
    this->limite = valor;
}

bool ContaEspecial::sacar(float valor) {
    if (valor > this->saldo) {
        if (valor > this->saldo + this->limiteAtual) {
            return false;
        } else {
            this->saldo -= valor;
            this->limiteAtual += this->saldo;
            //this->saldo = 0;
        }
    } else {
        this->saldo -= valor;
    }

    return true;
}

void ContaEspecial::descontarTaxaManutencao() {
    this->setSaldo(this->getSaldo() - this->getTaxaManutencao());
}

void ContaEspecial::info() const {
    cout << "Conta Especial - Número...........: " << this->numero << endl;
    cout << "Correntista.......................: " << this->correntista->getNome() << endl;
    cout << "Saldo.............................: " << this->saldo << endl;
    cout << "Limite Conta Especial.............: " << this->limite << endl;
    cout << "Limite Atual......................: " << this->limiteAtual << endl;
    //cout << "E-mail....................: " << this->correntista->getEmail() << endl;
}

/*
bool ContaEspecial::movimentar(float valor, int operacao){
    

   if (operacao == 1) //depositar
   {
        this->depositar(valor);
        //cout << "Operação Depositar realizada com sucesso."<<endl;
        return true;

   }
   else if (operacao == 0) //sacar
   {
       if (this->sacar(valor))
       {    
           //cout << "Operação Sacar realizada com sucesso."<<endl;
           return true;
       }
       else
       {
           cout << "Saldo Insuficiente" << endl;
           return false;
       }
       
   }else
   {    
       return false;
   }

}
*/