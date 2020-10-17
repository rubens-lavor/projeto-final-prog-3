#include <iostream>
//#include <string.h>

#include "Conta.h"
//#include "Conta.cpp"

#include "Pessoa.h"
//#include "Pessoa.cpp"

#include "ContaEspecial.h"
//#include "ContaEspecial.cpp"

#include "ContaComum.h"
//#include "ContaComum.cpp"

#include "ContaPoupanca.h"
//#include "ContaPoupanca.cpp"

#include "Taxa.h"

#include "Transacao.h"

#include "Movimento.h"

#include "Date.h"




using namespace std;

int main(){

   // se fizer assim: Conta c1; usa ponto
   // se instanciar assim: Pessoa *p2 = new Pessoa(); usa ->
 


   Pessoa *p1 = new Pessoa("josé","jose@gmail.com");
   Conta *c1 = new ContaComum(190521,p1,750.00f); 
   //como conta é uma classe abstrata, não sei se faz sentido instaciar
   //um obj do tipo conta com o construtor conta, mas está dando certo..
   //já testei instanciando com o construtor ContaComum e funcionou tbm!
   //como está no exemplo comentado abaixo:

   //Conta *c1 = new ContaComum(190521,p1,750.00f,100);
   

   
   Pessoa *p2 = new Pessoa();
   Conta c2;

   p2->setNome("maria");
   p2->setEmail("maria@gmail.com");
   c2.setCorrentista(p2);
   c2.setNumero(123123);
   c2.setSaldo(1000);

   cout << endl;
   cout <<"------------Contas-Correntistas------------"<<endl;
   cout << endl;

   cout << "Número da conta....: " << c1->getNumero()<<endl;
   cout << "Correntista........: " << c1->getCorrentista().getNome() << endl;
   cout << "Saldo..............: " << c1->getSaldo()<<endl;
   cout << "E-mail.............: " << c1->getCorrentista().getEmail() << endl;
   
   cout <<"-------------------------------------"<<endl;
   
   cout << "Número da conta....: " << c2.getNumero()<<endl;
   cout << "Correntista........: " << c2.getCorrentista().getNome() << endl;
   cout << "Saldo..............: " << c2.getSaldo()<<endl;
   cout << "E-mail.............: " << c2.getCorrentista().getEmail() << endl;
   
   /*
   cout << "Número da conta....: " << c2.getNumero()<<endl;
   cout << "Correntista........: " << c2.getCorrentista().getNome() << endl;
   cout << "Saldo..............: " << c2.getSaldo()<<endl;
   cout << "E-mail.............: " << c2.getCorrentista().getEmail() << endl;
   */

  // até aqui ta funcionando bem-----------primeira e segunda parte acima----


   cout <<"--------------------------------------"<<endl;
   cout << endl;
   cout <<"----------Saques e Depósitos----------"<<endl;
   cout << endl;

   if (c1->sacar(50)){
      cout<<"Saque efetuado com sucesso"<<endl;
   
   }else
   {
      cout<<"Saque não efetuado por saldo insuficiênte"<<endl;
   }

   c1->depositar(1000);

   cout << "Correntista: "<< c1->getCorrentista().getNome() << endl;
   cout << "saldo atual: "<< c1->getSaldo() << endl;

   cout <<"--------------------------------------"<<endl;
   cout << endl;
   cout <<"--Conta Especial-(Limite de crédito)--"<<endl;
   cout << endl;

   // até aqui ta funcionando bem-------terceira parte acimma----------------
   

   Pessoa *p3= new Pessoa("fábio","fabio@gmail.com");
   ContaEspecial e1 (123456,p3,0.00,1000);
   cout << "Saldo inicial.............: " << e1.getSaldo() << endl;
   cout << "Limite da conta...........: " << e1.getLimite() << endl;

   if (e1.sacar(100))
   {
      cout<<"Saque efetuado com sucesso"<<endl;
   }else
   {
      cout<<"Saque não efetuado. Limite insuficiênte"<<endl;
   }

   cout << "Saldo atual é.............: " << e1.getSaldo() << endl;
   cout << "Limite da conta...........: " << e1.getLimite() << endl;
   cout << "Correntista...............: " <<e1.getCorrentista().getNome() << endl;

   // até aqui ta funcionando bem-------quarta parte acima----------------




   cout <<"--------------------------------------"<<endl;
   cout << endl;
   cout <<"----------Taxa de Manutenção----------"<<endl;
   cout << endl;

   // Taxa tx(); --> não precisa criar um obj
   // do tipo taxa, outros objetos do tipo
   // ContaEspecial ou ContaComum, podem acessar
   // a classe Taxa direto

   e1.descontarTaxaManutencao();
   cout << "Saldo após a taxa de manutenção.....: " << e1.getSaldo() << endl;

   
   cout << "numero total de contas " << c1->getNumeroTotalDeContas() << endl;
  

   // até aqui ta funcionando bem-------quinta parte acima----------------

   //depositar é 1; sacar é 0;
   c1->movimentar(500,0); //tem 750 na conta e ta sacando tudo
   cout << "oi " << c1->getSaldo();
   cout << endl;


   // até aqui ta funcionando bem-------sexta parte acima----------------
   // realizando uma transação----------------

   //usar p1 (um obj do tipo Pessoa, já instaciado)
   // c2 (conta ja instanciada) 
   

   
   
   Transacao t1;

   float salAnt = c2.getSaldo();

   cout << "Saldo Atual Inicial: (atenção nesse ponto) " << c2.getSaldo();
   cout << endl; 

   t1.realizarTransacao(Date(),c2,100,"Depósito em dinheiro",1);

   c2.movimentar(100,1);
   cout << endl; 
   cout << "Saldo Atual Inicial: (atenção nesse ponto 2) " << c2.getSaldo()<<endl;

   t1.realizarTransacao(Date(),c2,50,"Pagamento Conta de Luz",0);

   c2.movimentar(50,0);
   cout << endl; 
   cout << "Saldo Atual Inicial: (atenção nesse ponto 3) " << c2.getSaldo()<<endl;

   t1.realizarTransacao(Date(),c2,120,"Pagamento Telefone",0);

   c2.movimentar(120,0);
   cout << endl; 
   cout << "Saldo Atual Inicial: (atenção nesse ponto 4) " << c2.getSaldo()<<endl;

   t1.realizarTransacao(Date(),c2,850,"Transferência",1);

   c2.movimentar(850,1);
   cout << endl; 
   cout << "Saldo Atual Inicial: (atenção nesse ponto 5) " << c2.getSaldo()<<endl;

   cout << "Emissão de Extrato da Conta Comum de Número: " << c2.getNumero();
   cout << endl;
   cout << "Correntista: " << c2.getCorrentista().getNome();
   cout << endl;
   cout << "Saldo Anterior: "<< salAnt;
   cout << endl;
   cout << "Saldo Atual: " << c2.getSaldo() << endl;

   cout << "Saldo Atual: " << c1->getSaldo() << endl;

   cout << endl;
   cout << endl;
   cout << endl;
   cout << "------------------------------------" << endl;

   for (Movimento mov: t1.getMovimentos()){
      //cout << "Data........:" << mov.getData() << endl;
      cout << "Histórico...:" << mov.getHistorico() << endl;
      cout << "Valor.......:" << mov.getValor() << endl;
      cout << "Operação....:" << mov.getOperacao() << endl;
      cout << "------------------------------------" << endl;
   }


   //verificar a questão da data
   //Até a aqui funciona muito bem-----------------------------------------


   return 0;

}