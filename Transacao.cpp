#include "Transacao.h"
//#include "Movimento.h"
//#include "Movimento.cpp"



Transacao::Transacao(/* args */)
{
}

Transacao::~Transacao()
{
    vector<Movimento> movimentos;

    /*
    Transacao movimentos;
    movimentos = vector<Movimento>();
    */
}

bool Transacao::realizarTransacao(Date data, Conta conta, float valor, string historico, int op){
        //Movimento *mov1 = new Movimento(data, conta, historico,valor,op);
        Movimento mov (data, conta, historico,valor,op);
        
        if (!mov.movimentar())
        {
            cout << "Não deu bom" << endl;
            return false;
        }

        //conta.movimentar(valor,op);
        this->movimentos.push_back(mov);
        //adiciona no vetor movimentos
        //o objeto que criamos, no caso mov.
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
