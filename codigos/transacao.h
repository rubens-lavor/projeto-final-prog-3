#ifndef TRANSACAO_H
#define TRANSACAO_H

//#include "Date.h"
#include "movimento.h"
#include <vector>
using namespace std;
//class Date;


/*
A classe Transação compoe um conjunto 
de objs do tipo Movimento.
Logo existe uma relação entre 
a classe Transação e a classe Movimento na
forma de uma commposição.
A classe Transacao é composta por objs do tipo
movimento.
E existe uma relação forte entre as duas:
No momento em que uma transacao deixar de
existir, serão destruídos todos os movimentos
associados a essa transação. Ou seja todos os 
movimentos serão destruídas quando uma transacao
também for destruída.

Conceito de composição é parecido com agregação,
porém na composição existe uma relação mais  forte
*/


//controla operações de movimento da conta
//efetiva uma movimentação na conta
class Transacao 
{
private:
    vector <Movimento> movimentos; 
    //vetor de obj do tipo movimento

public:
    Transacao(/* args */);
    ~Transacao();

    bool realizarTransacao(Date data, Conta &conta, float valor, string historico, int op, float saldo_anterior);

    void estornaTransacao();

    //Movimento getMovimentos();
    vector<Movimento> getMovimentos();
};




#endif