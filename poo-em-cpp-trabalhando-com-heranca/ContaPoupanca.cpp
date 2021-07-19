#include "ContaPoupanca.hpp"

ContaPoupanca::ContaPoupanca(std::string numero, Titular titular) :Conta(numero, titular) {

}

void ContaPoupanca::sacar(float valorSaque) {
    float tarifaDeSaque = valorSaque * 0.03;
    float valorDoSaque = valorSaque + tarifaDeSaque;
    if (valorSaque < 0 || valorDoSaque > saldo) {
        return;
    }
    saldo -= valorDoSaque;
}