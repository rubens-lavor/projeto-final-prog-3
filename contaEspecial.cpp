#include "contaEspecial.h"

/*
#include "Pessoa.h"
#include "Conta.h"
#include "Conta.cpp"

using namespace std;
class Pessoa;
class Conta;
*/

ContaEspecial::ContaEspecial(){

}

ContaEspecial::~ContaEspecial(){

}

ContaEspecial::ContaEspecial(int _numero, Pessoa &_correntista, float _saldo, float _limite) : 
Conta(_numero,_correntista,_saldo){

    this->setLimite(_limite);
}

int ContaEspecial::getTipo() const{
    return tipo;
}

float ContaEspecial::getLimite(){
    return this->limite;
}

void ContaEspecial::setLimite(float valor){
    this->limite=valor;
}

bool ContaEspecial::sacar(float valor){
    if (valor > this->getLimite())
    {
        return false;

    }else
    {
        this->setSaldo(this->getSaldo() - valor);
        this->setLimite(this->getLimite() - valor);
    
        return true;
    }
      
}

float ContaEspecial::getTaxaManutencao(){
    return 17.00f;
}

void ContaEspecial::descontarTaxaManutencao(){
    this->setSaldo(this->getSaldo() - this->getTaxaManutencao());
}

