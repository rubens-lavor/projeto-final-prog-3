#ifndef TAXA_H
#define TAXA_H

using namespace std;


class Taxa
{

private:
    //Conta *_conta;

public:
/*
    Taxa();
    ~Taxa();
 */   

   virtual float getTaxaManutencao();
   virtual void descontarTaxaManutencao();


};

/*
float Taxa::getTaxaManutencao(){
    //return 17.00f;

}
void Taxa::descontarTaxaManutencao(){
    
}

*/




#endif