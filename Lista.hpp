#include <iostream>
#include <memory>
#include <vector>

class Conta;

template <class Conta>
class Lista {
    //Tipo* outros;
    std::unique_ptr<Conta[]> contas;
    int maximo, top, tam=1;
    std::vector<Conta>contasss;

    /*
    Lista(Conta &a){
        contas = new Conta[tam];
        contas[tam] = a;
        contasss.push_back(a);
    }
    */
   public:
   void operator+(Conta c){
       contasss.push_back(c);
   }

   void incluir(Conta c){
       contasss.push_back(c);
   }
   
    template <typename>
    friend std::ostream &operator<<(std::ostream &, const Lista<Conta> &);
    template <typename>
    friend std::istream &operator>>(std::istream &, Lista<Conta> &);
};