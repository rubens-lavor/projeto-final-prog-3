#include "contaComum.h"


/*iniciando o construtor e aproveitando a inialização do 
construdor da classe Conta*/
ContaComum::ContaComum(int _numero, Pessoa &_correntista, float _saldo/*, float valor*/):
Conta(_numero,_correntista,_saldo){
}

ContaComum::ContaComum(){}

ContaComum::~ContaComum()
{
}

/*
int ContaComum::getTipo() const{
    return tipo;
}
*/

/*
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
*/

/*
float ContaComum::getTaxaManutencao(){
    return 17.00f;
}
*/

void ContaComum::descontarTaxaManutencao(){
    this->setSaldo(this->getSaldo() - this->getTaxaManutencao());
    //_conta->setSaldo(_conta->getSaldo() - this->getTaxaManutencao());
}

void ContaComum::info() const {
    std::cout << "Conta Comum :\n";
    std::cout << "Número da conta...........: " << this->numero << std::endl;
    std::cout << "Correntista...............: " << this->correntista->getNome() << std::endl;
    std::cout << "Saldo.....................: " << this->saldo << std::endl;
    std::cout << "CPF.......................: " << this->correntista->getCPF() << std::endl;
}