#include <iostream>
#include <string>
#include "Conta.hpp"
#include "Titular.hpp"
#include "Cpf.hpp"
#include "Funcionario.hpp"
using namespace std;

void ExibirSaldo(const Conta& conta) {
    cout.precision(2);
    cout << fixed;
    cout << "Seu saldo e de R$:" << conta.getSaldo() << endl;
   
}

int main()
{
    Conta umaConta("4931-5", Titular(Cpf("163.897.000-91"), "gabriel"));
    umaConta.depositar(500); 
    ExibirSaldo(umaConta);
    // pode-se utilizar nomeDaClasse:: quando o metodo for estatico
    cout << "Numero de contas  : " << Conta::getNumeroDeContas() << endl;

    Funcionario funcionario(Cpf("474.124.770-80"), "Jorge", 450.4);
    cout << " Nome do funcionario " << funcionario.getNome() << endl;
}