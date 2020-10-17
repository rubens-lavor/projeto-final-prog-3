#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
#include <string>
using namespace std;

class Pessoa
{
private:
    string nome;
    string email;
    
public:
    Pessoa(/* args */);
    Pessoa(string nome,string email);
    ~Pessoa();

    void setNome (string nome);
    void setEmail (string email);

    string getNome ();
    string getEmail ();
};


#endif
