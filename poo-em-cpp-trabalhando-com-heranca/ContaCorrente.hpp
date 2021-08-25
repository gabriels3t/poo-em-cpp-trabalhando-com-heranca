#pragma once
#include "Conta.hpp"

class ContaCorrente final: public Conta
{
public:
    ContaCorrente(std::string numero, Titular titular);
private:
    float taxaSaque() const override;

};