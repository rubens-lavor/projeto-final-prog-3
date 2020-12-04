#ifndef LISTA_H
#define LISTA_H

#include <algorithm>
#include <iostream>
#include <memory>
#include <vector>

template <class T>
class Lista {
    std::vector<T> contas;

    template <typename>
    friend std::ostream &operator<<(std::ostream &, Lista<T> &);

    /*
    template <typename>
    friend std::istream &operator>>(std::istream &, Lista<T> &);
    */

   public:

    vector<T> getLista() const {
        return contas;
    }

    void operator+(T &c) {
        contas.push_back(c);
    }

    T &operator[](size_t indice) {
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
ostream &operator<<(ostream &output, Lista<T> &list) {
    output << "Tamanho da lista:" << list.getLista().size() << "\n";
    string nome{};
    int numero;

    for (size_t i = 0; i < list.getLista().size(); i++) {
        nome = list[i].getCorrentista().getNome();
        numero = list[i].getNumero();

        output << "Conta " << numero << " - Nome: " << nome << "\n";
    }

    return output;
}

#endif