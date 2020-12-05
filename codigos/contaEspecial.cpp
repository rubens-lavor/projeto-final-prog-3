#include "contaEspecial.h"


ContaEspecial::ContaEspecial(){

}

ContaEspecial::~ContaEspecial(){

}

ContaEspecial::ContaEspecial(int _numero, Pessoa &_correntista, float _saldo, float _limite) : 
Conta(_numero,_correntista,_saldo){

    this->setLimite(_limite);
}

/*
int ContaEspecial::getTipo() const{
    return tipo;
}
*/

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

/*
float ContaEspecial::getTaxaManutencao(){
    return 17.00f;
}
*/

void ContaEspecial::descontarTaxaManutencao(){
    this->setSaldo(this->getSaldo() - this->getTaxaManutencao());
}

void ContaEspecial::info() const {
    cout << "Conta Especial - Número...........: " << this->numero << endl;
    cout << "Correntista.......................: " << this->correntista->getNome() << endl;
    cout << "Saldo.............................: " << this->saldo << endl;
    cout << "Limite Conta Especial.............: " << this->limite << endl;
    //cout << "E-mail....................: " << this->correntista->getEmail() << endl;
}

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
       /*
       cout << "Operação incorreta."<<endl;
       cout << "Escolha 0 (zero) para sacar ou."<<endl;
       cout << "Escolha 1 (um) para depositar."<<endl;
       */
       return false;
   }

}