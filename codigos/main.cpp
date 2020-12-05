#include <iostream>
#include <vector>

#include "conta.h"
#include "contaComum.h"
#include "contaEspecial.h"
#include "contaPoupanca.h"
#include "pessoa.h"
#include "transacao.h"
#include "Lista.hpp"



int main() {

    Pessoa p1("josé", "123.456.789-09");
    ContaComum c1(190521, p1, 750.00f);

    Pessoa p2("maria", "001.456.789-99");
    ContaPoupanca c2(1255534, p2, 1000.00f);

    Pessoa p3("lucia", "002.456.789-88");
    ContaEspecial c3(123456, p3, 0.00, 1000);

    //template e sobrecarga de operador
    Lista <Conta> lista(5);

    lista += c1;
    lista += c2;
    lista += c3;

    std::cout << lista;

    /*Herança e Polimorfismo--------------------*/
    Transacao t1;

    t1.realizarTransacao(c1,100.00,"Pagamento Telefone",0,c1.getSaldo());
    t1.realizarTransacao(c2,1400.00,"Salário",1,c2.getSaldo());
    t1.realizarTransacao(c3,350.00,"Empréstimo",0,c3.getSaldo());

    //std::cout << std::endl;
    t1.extrato(c1,"123");
    //std::cout << std::endl;
    t1.extrato(c2,"123");
    //std::cout << std::endl;
    t1.extrato(c3,"123");

    return 0;
}