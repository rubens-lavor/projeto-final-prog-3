#include "pessoa.h"

Pessoa::Pessoa(/* args */)
{
}

Pessoa::Pessoa(string _nome, string _email)
{
    this->nome = _nome;
    this->email = _email;
}

Pessoa::~Pessoa()
{
}

void Pessoa::setNome (string _nome){
    this->nome = _nome;
}

void Pessoa::setEmail (string _email){
    this->email = _email;
}

string Pessoa::getNome (){
    //cout<<"ok "<< this->nome;
    return this->nome;
}

string Pessoa::getEmail (){
    //cout<<"oi"<< this->email;
    return this->email;
}

