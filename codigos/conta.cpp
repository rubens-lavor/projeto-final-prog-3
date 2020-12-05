#include "conta.h"


Conta::Conta(){
    contasCriadas++;
}

Conta::Conta(int _numero, Pessoa &_correntista, float _saldo, string _senha){
    contasCriadas++;
    this->setNumero(_numero);
    this->correntista = &_correntista;
    this->senha = _senha;
    
    /*
    não preciso chamar a função.. apenas preciso passar
    o ponteiro

    correntista->getNome();
    correntista->getEmail();
    */
    this->setSaldo(_saldo);
    
}

Conta::~Conta(){
    //delete correntista;
}

int Conta::getTipo() const{
    return tipo;
}


bool Conta::validacao (string chave) const {
    return chave == senha ? true:false;
}


void Conta::setNumero(int num){
    this->numero = num;
}

int Conta::getNumero(){
    return this->numero;
}


void Conta::setCorrentista(Pessoa &_correntista){
    this->correntista = &_correntista;
}

Pessoa Conta::getCorrentista(){
    return *correntista;
}

void Conta::setSaldo(float _saldo){
    this->saldo = _saldo;
}

float Conta::getSaldo(){
    return this->saldo;
}

//métodos de transações bancárias---------------

void Conta::depositar(float valor){
    this->setSaldo(this->getSaldo() + valor);
    //cout << "Depósito no valor de: R$ "<< valor << endl;
    //cout << "Operação Realizada" << endl;
    //cout << "Saldo Atual após o depósito: "<< this->getSaldo() <<endl; 
}

bool Conta::sacar(float valor){
    if (this->getSaldo()>= valor)
    {
        //cout << "Saque no valor de: R$ " << valor << endl; 
        this->setSaldo(this->getSaldo() - valor);
        //cout << "Operação Realizada" << endl;
        //cout << "Saldo Atual após o saque: "<< this->getSaldo() <<endl; 
        return true;
    }else
    {   
        cout << "Saldo Insuficiente" << endl;
        return false;
    }
}

bool Conta::movimentar(float valor, int operacao){
    
    //bool retorno = true;
    
    /* 
    switch (operacao)
    {   
        case 1:
            this->depositar(valor);
            break;
    
        case 0:
            retorno = this->sacar(valor);
            break;

        default:
            return false
    }

    return retorno

    */

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
       /*
       cout << "Operação incorreta."<<endl;
       cout << "Escolha 0 (zero) para sacar ou."<<endl;
       cout << "Escolha 1 (um) para depositar."<<endl;
       */
       return false;
   }

}


int Conta::contasCriadas = 0;

/*
int Conta::DEPOSITAR = 0;
int Conta::SACAR = 1;
*/

/*
void Conta::incrementaContas(){
    numeroDeContas++;
}
*/


int Conta::getNumeroTotalDeContas(){
    return contasCriadas;
}

void Conta::info() const {
    cout << "oiiiiiiiiiiiiiii\n";
}