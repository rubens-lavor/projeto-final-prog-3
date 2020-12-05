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

    Pessoa p1("josé", "jose@gmail.com");
    ContaComum c1(190521, p1, 750.00f);

    Pessoa p2("maria", "maria@gmail.com");
    ContaPoupanca c2(1255534, p2, 1000.00f);

    Pessoa p3("lucia", "lucia@gmail.com");
    ContaEspecial c3(123456, p3, 0.00, 1000);

    //template e sobrecarga de operador
    Lista <Conta> lista;

    lista += &c1;
    lista += &c2;
    lista += &c3;

    cout << lista;

    /*Herança e Polimorfismo--------------------*/
    Transacao t1;

        t1.realizarTransacao(Date(),c1,100.00,"Pagamento Telefone",0,c1.getSaldo());
        t1.realizarTransacao(Date(),c2,1400.00,"Salário",1,c2.getSaldo());
        t1.realizarTransacao(Date(),c3,350.00,"Empréstimo",0,c3.getSaldo());

    cout << endl;

    t1.extrato(c1);

    cout << endl;

    t1.extrato(c2);

    cout << endl;

    t1.extrato(c3);

    return 0;
}