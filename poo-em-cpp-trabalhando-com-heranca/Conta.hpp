#pragma once
#include <string>
#include "Titular.hpp"


//struct tudo � publico e uuma class tudo � privado 
class Conta
{
protected:
    float saldo;
private:
    static int numeroDeContas;
    std::string numeroConta;
    Titular titular;
    
public:
    Conta() = delete; //deletando o construtor padr�o 
    Conta(std::string numero, Titular titular); //construtor
    ~Conta();//destrutor
    void sacar(float valorSaque);
    void depositar(float valordeposito);
    float getSaldo() const; // deixando a fun��o constante
    std::string getNumeroConta() const;
    static int getNumeroDeContas();
};
