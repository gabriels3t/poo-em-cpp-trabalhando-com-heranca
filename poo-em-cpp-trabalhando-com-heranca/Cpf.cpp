#include "Cpf.hpp"
#include <iostream>

Cpf::Cpf(std::string numero) :cpf(numero) {
	cpfExiste();

}


std::string Cpf::getCpf() {
	return cpf;
}




// Verificar cpf 
void Cpf::cpfExiste() {	
	verificandoPrimeiroDigito();
	verificandoSegundoDigito();

}

void Cpf::verificandoSegundoDigito() {
	int* numeroCpf = pegandoNumerosCpf();
	int constantes[10] = { 11,10,9,8,7,6,5,4,3,2 };
	int somatoria = 0;

	for (int i = 0; i < 10; i++) {
		somatoria += numeroCpf[i] * constantes[i];
	}
	int ultimoDigito = *(numeroCpf+ 10);
	int verificador = verificadorDosUltimosDigitos(somatoria);
	if (ultimoDigito != verificador) {
		mensagemCpfNaoExiste();
	}
}

void Cpf::verificandoPrimeiroDigito() {
	int* numeroCpf = pegandoNumerosCpf();
	int constantes[9] = { 10,9,8,7,6,5,4,3,2 };
	int somatoria = 0;
	for (int i = 0; i < 9; i++) {
		somatoria += numeroCpf[i] * constantes[i];

	}
	int penultimoDigito = *(numeroCpf+9);
	int verificador = verificadorDosUltimosDigitos(somatoria);

	if (penultimoDigito != verificador) {

		mensagemCpfNaoExiste();
	}

}
int Cpf::verificadorDosUltimosDigitos(int somatoria) {

	int quociente = somatoria / 11;
	int  resto = somatoria % 11;
	int verificador = 0;
	if (resto >= 2) {
		verificador = 11 - resto;
	}
	return verificador;

}

int* Cpf::pegandoNumerosCpf() {
	int numerosCpf[11] = {};
	int j =0 ;
	char ponto[1];
	char traco[1];
	ponto[0] = '.';
	traco[0] = '-';
	if (this->cpf.size() == 14) {
		for (int i = 0; i < 14; i++) {
			bool naoTemNumero = cpf[i] != ponto[0]&& cpf[i] != traco[0];
			if (naoTemNumero) {
				numerosCpf[j] = cpf[i]-'0'; // -'0' para transformar um nomero da tabela ascii em numero int
				j++;
					
			}
		}
		return numerosCpf;
	}
	mensagemCpfNaoExiste();
}

void Cpf::mensagemCpfNaoExiste() {
	std::cout << "Cpf nao existe" << std::endl;
	exit(1);
}