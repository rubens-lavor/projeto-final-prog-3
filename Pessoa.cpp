#include "Pessoa.h"

Pessoa::Pessoa(/* args */)
{
}

Pessoa::Pessoa(string nome, string email)
{
    this->nome=nome;
    this->email=email;
}

Pessoa::~Pessoa()
{
}

void Pessoa::setNome (string nome){
    this->nome = nome;
}

void Pessoa::setEmail (string email){
    this->email = email;
}

string Pessoa::getNome (){
    //cout<<"ok "<< this->nome;
    return this->nome;
}

string Pessoa::getEmail (){
    //cout<<"oi"<< this->email;
    return this->email;
}

