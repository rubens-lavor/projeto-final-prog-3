#include <iostream>
#include <vector>
#include <algorithm>

#include "conta.h"
#include "contaComum.h"
#include "contaEspecial.h"
#include "contaPoupanca.h"
#include "date.h"
#include "movimento.h"
#include "pessoa.h"
#include "taxa.h"
#include "transacao.h"

#include "Lista.hpp"


using namespace std;


int main() {

    //Conta c0;
    Pessoa p1("josé", "jose@gmail.com");
    ContaComum c1(190521, p1, 750.00f);

    Pessoa p2("maria", "maria@gmail.com");
    ContaPoupanca c2(1255534, p2, 1000.00f);

    Pessoa p3("lucia", "lucia@gmail.com");
    ContaEspecial c3(123456, p3, 0.00, 1000);

    //template e sobrecarga de operador
    Lista <Conta> lista;
    vector<Conta*> vet{1};
    ContaEspecial *a = new ContaEspecial(1002,p1,100.00,1000);
    ContaComum *b = new ContaComum();
    
    //lista + *a;
    //lista + *c2;
    //lista + c3;

    /*
     auto lstatus = [](auto&conta ) { conta->info() };

    std::transform(lista.getLista().begin(), lista.getLista().end(), lista.getLista().begin(), [](auto& conta) -> Conta* { return new ContaComum{190521, p1, 750.00f}; });

    std::for_each(lista.getLista().begin(), lista.getLista().end(), lstatus);
    */

   //std::for_each(lista.getLista().begin(), lista.getLista().end(),[](){});

    cout << lista.getLista().size();
    /*
    lista.insere(*a);
    lista[0]->info();
    lista.insere(c2);
    lista[1]->info();
    lista + &c3;
    lista[2]->info();
    lista + new ContaComum(123456, p3, 0.00);
    lista[3]->info();
    */

    //lista.getLista().at(0);
    cout << lista;

    //vet[0] = a;
    //vet.push_back(a);

    //vet[0]->info();
    //a.info();

    //lista[0]->info();
    //lista.getLista().at(0)->info();
    
    /*
    lista[0].info();
    lista[1].info();
    lista[2].info();
    */

    /*
    c1.info();
    c2.info();
    c3.info();
    */
    //lista.imprime_lista();

    /*
    cout << endl;
    cout << "------------Contas-Correntistas------------" << endl;
    cout << endl;

    cout << "Número da conta....: " << c1.getNumero() << endl;
    cout << "Correntista........: " << c1.getCorrentista().getNome() << endl;
    cout << "Saldo..............: " << c1.getSaldo() << endl;
    cout << "E-mail.............: " << c1.getCorrentista().getEmail() << endl;

    cout << "-------------------------------------" << endl;

    cout << "Número da conta....: " << c2.getNumero() << endl;
    cout << "Correntista........: " << c2.getCorrentista().getNome() << endl;
    cout << "Saldo..............: " << c2.getSaldo() << endl;
    cout << "E-mail.............: " << c2.getCorrentista().getEmail() << endl;

    cout << "-------------------------------------" << endl;

    cout << "Número da conta....: " << c3.getNumero() << endl;
    cout << "Correntista........: " << c3.getCorrentista().getNome() << endl;
    cout << "Saldo..............: " << c3.getSaldo() << endl;
    cout << "E-mail.............: " << c3.getCorrentista().getEmail() << endl;

    cout << "--------------------------------------" << endl;
    cout << endl;


    //demo_saque_deposito(c1, 50, 1000);

    cout << "Correntista: " << c1.getCorrentista().getNome() << endl;
    cout << "saldo atual: " << c1.getSaldo() << endl;

  

    cout << "--------------------------------------" << endl;
    cout << endl;
    cout << "--Conta Especial-(Limite de crédito)--" << endl;
    cout << endl;

    cout << "Saldo inicial.............: " << c3.getSaldo() << endl;
    cout << "Limite da conta...........: " << c3.getLimite() << endl;

    if (c3.sacar(100)) {
        cout << "Saque efetuado com sucesso" << endl;
    } else {
        cout << "Saque não efetuado. Limite insuficiênte" << endl;
    }

    cout << "Saldo atual é.............: " << c3.getSaldo() << endl;
    cout << "Limite da conta...........: " << c3.getLimite() << endl;
    cout << "Correntista...............: " << c3.getCorrentista().getNome() << endl;

    cout << "--------------------------------------" << endl;
    cout << endl;
    cout << "----------Taxa de Manutenção----------" << endl;
    cout << endl;


    c3.descontarTaxaManutencao();
    cout << "Saldo após a taxa de manutenção.....: " << c3.getSaldo() << endl;

    */

    /*-----------------transações--------------------*/

    Transacao t1;

    /*
    demo_mov(t1,c1,0,150,"pagamento telefone");
    demo_mov(t1,c1,0,200,"pagamento luz");

    demo_mov(t1,c2,1,500,"transferencia recebida");
    demo_mov(t1,c2,0,200,"saque");

    demo_extrato(t1,c1,"123");
    demo_extrato(t1,c2,"123");
    */

    return 0;
}