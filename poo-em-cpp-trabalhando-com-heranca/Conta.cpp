#include <iostream>
#include "Conta.hpp"

int Conta::numeroDeContas = 0;

// fazendo o construtor assim, o compilador nao precisa alocar 2 vezes a memoria.
//assim deixando o codigo um pouco mais rapido
Conta::Conta(std::string numero,Titular titular) 
    : numeroConta(numero),titular(titular),saldo(0.0f) {
    
    numeroDeContas++;
}

Conta::~Conta() {
    numeroDeContas--;
}

void Conta::sacar(float valorSaque) {
    if (valorSaque < 0 || valorSaque > saldo) {
        return;
    }
    saldo -= valorSaque;
}

void Conta::depositar(float valordeposito) {
    if (valordeposito < 0) {
        return;
    }
    saldo += valordeposito;
}

float Conta::getSaldo() const {
    return saldo;
}
std::string Conta::getNumeroConta() const {
    return numeroConta;
}


int Conta::getNumeroDeContas()  {
    return numeroDeContas;
}
