#pragma once
#include <string>
#include "Cpf.hpp"
class Titular
{
private:
	std::string nome;
	Cpf cpf;
	
public:
	Titular(Cpf cpf,std::string nome);
	std::string getNome();
private:
	void verificaTamanhoDoNome();
};

