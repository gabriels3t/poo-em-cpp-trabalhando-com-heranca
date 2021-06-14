#pragma once
#include <string>
class Cpf
{
private:
	std::string cpf;
	
public:
	explicit Cpf(std::string cpf); // obrigando a ser passado pelo construtor 
	std::string getCpf();
private:
	void cpfExiste();
	int* pegandoNumerosCpf();
	void verificandoPrimeiroDigito(); 
	void verificandoSegundoDigito();
	int verificadorDosUltimosDigitos(int somatoria);
	void mensagemCpfNaoExiste();
};

