#include <iostream>

#include "conta.h"
#include "contaComum.h"
#include "contaEspecial.h"
#include "contaPoupanca.h"
#include "date.h"
#include "movimento.h"
#include "pessoa.h"
#include "taxa.h"
#include "transacao.h"

using namespace std;

void demo_saque_deposito(Conta &a, float valor_saque = 0.0, float valor_deposito = 0.0) {
    cout << "----------Função demontração de Saques e Depósitos----------" << endl;
    cout << endl;

    if (valor_saque) {
        if (a.sacar(50)) {
            cout << "Saque efetuado com sucesso, no valor de: R$" << valor_saque << endl;

        } else {
            cout << "Saque não efetuado por saldo insuficiênte" << endl;
        }
    }
    if (valor_deposito) {
        /* code */
        a.depositar(1000);
        cout << "Depósito efetuado com sucesso, no valor de: R$" << valor_deposito << endl;
    }
}
/*
void demo_saque_deposito2(ContaEspecial &a, float valor_saque = 0.0, float valor_deposito = 0.0) {
    if (a.getTipo() == 3) {
        cout << "--------------------------------------" << endl;
        cout << endl;
        cout << "--Conta Especial-(Limite de crédito)--" << endl;
        cout << endl;

        cout << "Saldo inicial.............: " << a.getSaldo() << endl;
        cout << "Limite da conta...........: " << a.getLimite() << endl;

        if (a.sacar(100)) {
            cout << "Saque efetuado com sucesso" << endl;
        } else {
            cout << "Saque não efetuado. Limite insuficiênte" << endl;
        }

        cout << "Saldo atual é.............: " << a.getSaldo() << endl;
        cout << "Limite da conta...........: " << a.getLimite() << endl;
        cout << "Correntista...............: " << a.getCorrentista().getNome() << endl;

        cout << "--------------------------------------" << endl;
        cout << endl;
        cout << "----------Taxa de Manutenção----------" << endl;
        cout << endl;

        return;
    }
}
*/

void demo_mov(Transacao &t1, Conta &a, int op, float valor, string descricao) {

    cout << endl;
    cout << endl;
    cout << "------------------------------------" << endl;
    cout << "Movimentações: " << endl;
    cout << "Valor......: "<< valor << endl;
    cout << "Operação...: "<< (op?"Depósito":"Saque") << endl;
    cout << "Conta......: "<< a.getNumero()<< endl;

    float saldo_anterior = a.getSaldo();
    t1.realizarTransacao(Date(), a, valor, descricao, op, saldo_anterior);

    if(a.movimentar(valor, op)){
        cout << "Operação realizada com sucesso " << endl;
    }
    cout << endl;

}

void demo_extrato(Transacao &t1, Conta &c, string senha){
    float saldo_anterior_ = 0;
    bool validacao = c.validacao(senha);
    string nome = c.getCorrentista().getNome();

    cout << endl;
    cout << endl;
    cout << "------------------------------------" << endl;
    cout << "Emissão de Extrato da conta de Número: " << c.getNumero();
    cout << endl;
    cout << endl;
    cout << "Correntista...: " << c.getCorrentista().getNome();
    cout << endl;

    for (Movimento mov : t1.getMovimentos()) {
        if (mov.getConta().getCorrentista().getNome() == nome && validacao) {
            cout << endl;
            cout << "Data..........:" << endl;
            cout << "Descrição.....:" << mov.getHistorico() << endl;
            cout << "Valor.........:" << mov.getValor() << endl;
            cout << "Operação......:" << mov.getOperacao() << endl;
            saldo_anterior_ = mov.getSaldoAnterior();
        }
    }
    cout << "------------------------------------" << endl;
    
    cout << "Saldo Anterior: " << saldo_anterior_;
    cout << endl;
    cout << "Saldo Atual: " << c.getSaldo() << endl;
    
}

int main() {
    // se fizer assim: Conta c1; usa ponto
    // se instanciar assim: Pessoa *p2 = new Pessoa(); usa ->

    //Pessoa *p1 = new Pessoa("josé", "jose@gmail.com");
    //Conta *c1 = new ContaComum(190521, p1, 750.00f);
    //como conta é uma classe abstrata, não sei se faz sentido instaciar
    //um obj do tipo conta com o construtor conta, mas está dando certo..
    //já testei instanciando com o construtor ContaComum e funcionou tbm!
    //como está no exemplo comentado abaixo:

    //Conta *c1 = new ContaComum(190521,p1,750.00f,100);

    Pessoa p1("josé", "jose@gmail.com");
    ContaComum c1(190521, p1, 750.00f);

    Pessoa p2("maria", "maria@gmail.com");
    ContaPoupanca c2(1255534, p2, 1000.00f);

    Pessoa p3("lucia", "lucia@gmail.com");
    ContaEspecial c3(123456, p3, 0.00, 1000);

    /*
    p2.setNome("maria");
    p2->setEmail("maria@gmail.com");
    */

    c2.setCorrentista(p2);
    c2.setNumero(123123);
    c2.setSaldo(1000);

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

    /*
    cout << "----------Saques e Depósitos----------" << endl;
    cout << endl;

    if (c1.sacar(50)) {
        cout << "Saque efetuado com sucesso:" << endl;

    } else {
        cout << "Saque não efetuado por saldo insuficiênte" << endl;
    }

    c1.depositar(1000);
    */

    demo_saque_deposito(c1, 50, 1000);

    //demo_saque_deposito(e1, 50, 1000);

    cout << "Correntista: " << c1.getCorrentista().getNome() << endl;
    cout << "saldo atual: " << c1.getSaldo() << endl;

    /*cout << "Correntista: " << c1.getCorrentista().getNome() << endl;
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
    

    // Taxa tx(); --> não precisa criar um obj
    // do tipo taxa, outros objetos do tipo
    // ContaEspecial ou ContaComum, podem acessar
    // a classe Taxa direto

    c3.descontarTaxaManutencao();
    cout << "Saldo após a taxa de manutenção.....: " << c3.getSaldo() << endl;

    cout << "numero total de contas " << c1.getNumeroTotalDeContas() << endl;

    //depositar é 1; sacar é 0;
    c1.movimentar(500, 0);  //tem 750 na conta
    cout << "Saldo após movimentação: " << c1.getSaldo();
    cout << endl;
    */

    /*-----------------transações--------------------*/

    Transacao t1;

    demo_mov(t1,c1,0,150,"pagamento telefone");
    demo_mov(t1,c1,0,200,"pagamento luz");

    demo_mov(t1,c2,1,500,"transferencia recebida");
    demo_mov(t1,c2,0,200,"saque");

    //demo_mov(t1,c3,0,500,"saque");

    /*
    float salddo_anterior_da_maria = c2.getSaldo();


    cout << "Saldo Atual Inicial: " << c2.getSaldo();
    cout << endl;

    cout << "movimentações: " << endl;

    t1.realizarTransacao(Date(), c2, 100, "Depósito em dinheiro", 1);

    c2.movimentar(100, 1);
    cout << endl;
    //cout << "Saldo Atual Inicial: (atenção nesse ponto 2) " << c2.getSaldo() << endl;

    t1.realizarTransacao(Date(), c2, 50, "Pagamento Conta de Luz", 0);

    c2.movimentar(50, 0);
    cout << endl;
    //cout << "Saldo Atual Inicial: (atenção nesse ponto 3) " << c2.getSaldo() << endl;

    t1.realizarTransacao(Date(), c2, 120, "Pagamento Telefone", 0);

    c2.movimentar(120, 0);
    cout << endl;
    //cout << "Saldo Atual Inicial: (atenção nesse ponto 4) " << c2.getSaldo() << endl;

    t1.realizarTransacao(Date(), c2, 850, "Transferência recebida", 1);

    c2.movimentar(850, 1);
    cout << endl;
    //cout << "Saldo Atual Inicial: (atenção nesse ponto 5) " << c2.getSaldo() << endl;
    */

   /*
   float saldo_anterior_ = 0;

   for (Movimento mov : t1.getMovimentos()) {
        //cout << "Data........:" << mov.getData() << endl;
        if (mov.getConta().getCorrentista().getNome() == c2.getCorrentista().getNome()){
            saldo_anterior_ = mov.getSaldoAnterior();
        }
    }

    cout << "Emissão de Extrato da Conta Comum de Número: " << c2.getNumero();
    cout << endl;
    cout << "Correntista: " << c2.getCorrentista().getNome();
    cout << endl;
    cout << "Saldo Anterior: " << saldo_anterior_;
    cout << endl;

    cout << endl;
    cout << endl;
    cout << endl;
    cout << "------------------------------------" << endl;


    for (Movimento mov : t1.getMovimentos()) {
        //cout << "Data........:" << mov.getData() << endl;
        if (mov.getConta().getCorrentista().getNome() == "maria" && mov.getConta().validacao("123")) {
            cout << "Histórico...:" << mov.getHistorico() << endl;
            cout << "Valor.......:" << mov.getValor() << endl;
            cout << "Operação....:" << mov.getOperacao() << endl;
            cout << "------------------------------------" << endl;
        }
    }

    cout << "Saldo Atual: " << c2.getSaldo() << endl;
    */
    //verificar a questão da data


    demo_extrato(t1,c1,"123");
    demo_extrato(t1,c2,"123");
    demo_extrato(t1,c3,"123");

    return 0;
}