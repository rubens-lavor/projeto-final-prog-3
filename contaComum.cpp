#include "contaComum.h"


/*iniciando o construtor e aproveitando a inialização do 
construdor da classe Conta*/
ContaComum::ContaComum(int numero, Pessoa &correntista, float saldo/*, float valor*/):
Conta(numero,correntista,saldo){
}

ContaComum::ContaComum(){}

ContaComum::~ContaComum()
{
}

bool ContaComum::sacar(float valor){
    if (this->getSaldo()>= valor)
    {
        this->setSaldo(this->getSaldo() - valor);
        return true;
    }else
    {
        return false;
    }
}

float ContaComum::getTaxaManutencao(){
    return 17.00f;

}
void ContaComum::descontarTaxaManutencao(){
    this->setSaldo(this->getSaldo() - this->getTaxaManutencao());
    //_conta->setSaldo(_conta->getSaldo() - this->getTaxaManutencao());
}