#include "transacao.h"


Transacao::Transacao(/* args */)
{
}

Transacao::~Transacao()
{
    //vector<Movimento> movimentos;
}

bool Transacao::realizarTransacao(Conta &conta, float valor, string historico, int op, float saldo_anterior){
        Movimento mov (conta, historico,valor,op, saldo_anterior);

        //if (!mov.movimentar())
        if (!conta.movimentar(valor,op))
        {
            cout << "Não deu bom" << endl;
            return false;
        }
        //cout << "ok" << endl;

        //conta.movimentar(valor,op);
        //movimentação registrada
        this->movimentos.push_back(mov);
        return true;
        
}

void Transacao::estornaTransacao(){
    for(Movimento mov: this->movimentos){
        movimentos.pop_back();
    }

    /* outra forma

    while (!movimentos.empty()){
        movimentos.pop_back();
    }

    */
}

//retorna o vector
vector<Movimento> Transacao::getMovimentos(){
    return this->movimentos;
}


void Transacao::extrato(Conta &c1) const {

    
    float saldo_anterior_ = 0;
    //bool validacao = c1.validacao("123");
    int num_conta = c1.getNumero();

    cout << endl;
    cout << "------------------------------------" << endl;
    cout << "Emissão de Extrato:\n";
    /*
    cout << endl;
    cout << endl;
    cout << "Correntista...: " << c1.getCorrentista().getNome();
    cout << endl;
    cout << endl;
    cout << endl;
    */
    c1.info();

    cout << "\nMovimentações: " << endl;

    for (Movimento mov : this->movimentos) {
        if (mov.getConta().getNumero() == num_conta) {
            //cout << "Data..........:" << endl;
            cout << "Descrição.....:" << mov.getHistorico() << endl;
            cout << "Valor.........:" << mov.getValor() << endl;
            cout << "Operação......:" << (mov.getOperacao()?"deposito":"saque") << endl;
            saldo_anterior_ = mov.getSaldoAnterior();
        }
    }

    
    cout << "------------------------------------" << endl;
    
    cout << "Saldo Anterior: " << saldo_anterior_;
    cout << endl;
    cout << "Saldo Atual: " << c1.getSaldo() << endl;
}