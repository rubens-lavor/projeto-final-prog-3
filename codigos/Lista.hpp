#ifndef LISTA_H
#define LISTA_H

#include <algorithm>
#include <iostream>
#include <memory>
#include <vector>

template <class T>
class Lista {
    std::vector<T *> contas{10};
    size_t tam = 0;

    template <typename>
    friend std::ostream &operator<<(std::ostream &, Lista<T> &);

   public:

    
    size_t getTam()const{
        return tam;
    }

    vector<T *> getLista() const {
        return contas;
    }

    /*
     * adiciona uma conta a lista
    */
    void operator+=(T *c) {
        contas[tam] = c;
        tam++;
    }

    /*
    void insere(T &c){
        contas[tam]=&c;
        tam++;
    }
    */

    T *operator[](size_t indice) const {
        return contas[indice];
    }

    void imprime_lista_detalhada() {
        for (size_t i = 0; i < tam; i++) {
            contas[i]->info();
            cout<< "\n";
            cout << "-------------------------------------" << endl;
        }
    }
};

template <class T>
ostream &operator<<(ostream &output, const Lista<T> &lista) {
    output << "Tamanho da listaa:" << lista.getTam() << "\n";
    string nome{};
    int numero;

    for (size_t i = 0; i < lista.getTam(); i++) {
        nome = lista[i]->getCorrentista().getNome();
        numero = lista[i]->getNumero();

        output << "Correntista: " << nome <<  "  Numero da Conta: " << numero << "\n";
    }

    return output;
}

#endif