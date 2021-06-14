#pragma once
#include <string>
#include "Titular.hpp"


//struct tudo é publico e uuma class tudo é privado 
class Conta
{
private:
    static int numeroDeContas;
    std::string numeroConta;
    Titular titular;
    float saldo;
public:
    Conta() = delete; //deletando o construtor padrão 
    Conta(std::string numero, Titular titular); //construtor
    ~Conta();//destrutor
    void sacar(float valorSaque);
    void depositar(float valordeposito);
    float getSaldo() const; // deixando a função constante
    std::string getNumeroConta() const;
    static int getNumeroDeContas();
};
