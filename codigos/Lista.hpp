#ifndef LISTA_H
#define LISTA_H

#include <algorithm>
#include <iostream>
#include <memory>
#include <vector>

template <class T>
class Lista {
    std::vector<T*> contas{3};
    size_t top = 0;

    template <typename>
    friend std::ostream &operator<<(std::ostream &, Lista<T> &);

    /*
    template <typename>
    friend std::istream &operator>>(std::istream &, Lista<T> &);
    */
   /*
   std::unique_ptr<Tipo[]> outros;
    int maximo, top;

   public:
    Lista(unsigned capacidade = 20) : top{-1} {
//        outros = new Tipo[capacidade];
        outros = std::make_unique<Tipo[]>(capacidade);
        maximo = capacidade;
    }
*/
    public:
    /*
    * retorna a lista
    */
   
    vector<T*> getLista() const {
        return contas;
    }


    /*
     * adiciona uma conta a lista
    */
    void operator+(T *c) {
        contas[top]=c;
        top++;

    }

    void insere(T &c){
        contas[top]=&c;
        top++;
    }

    
    T* operator[](size_t indice) const {
        return contas[indice];
    }

};
/*
template <class T>
istream &operator>>(istream &input, Lista<T> &a) {
    return input;
}
*/

template <class T>
ostream &operator<<(ostream &output, const Lista<T> &list) {
    output << "Tamanho da lista:" << list.getLista().size() << "\n";
    string nome{};
    int numero;

    for (size_t i = 0; i < list.getLista().size(); i++) {
        nome = list[i]->getCorrentista().getNome();
        numero = list[i]->getNumero();

        output << "Conta " << numero << " - Nome: " << nome << "\n";
    }

    return output;
}

#endif