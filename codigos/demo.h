#ifndef DEMO_H
#define DEMO_H
#include <iostream>
#include <string>

class Demo {


/*
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
        a.depositar(1000);
        cout << "Depósito efetuado com sucesso, no valor de: R$" << valor_deposito << endl;
    }
}

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
*/

};

#endif