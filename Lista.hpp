#ifndef LISTA_H
#define LISTA_H

#include <iostream>
#include <memory>
#include <vector>

class Pessoa;
using namespace std;

template <class T>
class Lista {
    public:
    //Tipo* outros;
    std::unique_ptr<T[]> contas;
    int maximo, top, tam=1;
    std::vector<T>contasss;
    Pessoa *ptr;

    template <typename>
    friend std::ostream &operator<<(std::ostream &, Lista<T> &);
    template <typename>
    friend std::istream &operator>>(std::istream &, Lista<T> &);

    /*
    Lista(Conta &a){
        contas = new Conta[tam];
        contas[tam] = a;
        contasss.push_back(a);
    }
    */
   //public:
   void operator+(T &c){
       contasss.push_back(c);
   }

   void incluir(T &c){
       contasss.push_back(c);
   }

   vector<T> getLista(){
    return contasss;
   }

    
};

template <class T>
istream &operator>>(istream &input, Lista<T> &a) {
    return input;
}

template <class T>
ostream &operator<<(ostream &output, Lista<T> &list) {
    output << "Tamanho da lista:" << list.contasss.size() << "\n";
    for (size_t i = 0; i < list.contasss.size(); i++)
    {
        output << "Conta " << i << " - Nome " << list.contasss[i].getCorrentista().getNome() << "\n";
    }
    
    return output;
}

#endif