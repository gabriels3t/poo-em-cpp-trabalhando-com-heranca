#pragma once
#include <string>
#include "Pessoa.hpp"
#include "Cpf.hpp"
// Criando uma heran�a entre  as classes Titular e pessoa 
class Titular:public Pessoa
{
public:
	Titular(Cpf cpf, std::string nome);
};

