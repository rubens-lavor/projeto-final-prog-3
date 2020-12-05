#ifndef TAXA_H
#define TAXA_H

/*
- Classe abstrata Taxa, as classe derivadas dela, são responsáveis pela implementação do métodos. 

- class Taxa não pode ser instanciada.
*/
class Taxa {
   private:
   float taxa_manutencao = 17.00;
   float taxa_juros_poupanca = 0.5;
   public:
    float getTaxaManutencao();
    float getTaxa_juros_poupanca();
    
    virtual void descontarTaxaManutencao()= 0;
    virtual void incremento_juros() = 0;

    virtual ~Taxa(){}
};

#endif