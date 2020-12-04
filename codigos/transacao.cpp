#include "transacao.h"


Transacao::Transacao(/* args */)
{
}

Transacao::~Transacao()
{
    //vector<Movimento> movimentos;
}

bool Transacao::realizarTransacao(Date data, Conta conta, float valor, string historico, int op, float saldo_anterior){
        Movimento mov (data, conta, historico,valor,op, saldo_anterior);
        
        if (!mov.movimentar())
        {
            cout << "Não deu bom" << endl;
            return false;
        }
        //cout << "ok" << endl;
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
