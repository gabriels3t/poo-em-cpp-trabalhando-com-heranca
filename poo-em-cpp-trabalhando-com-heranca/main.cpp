#include <iostream>
#include <string>
#include "Conta.hpp"
#include "ContaPoupanca.hpp"
#include "Titular.hpp"
#include "Cpf.hpp"
#include "Funcionario.hpp"
using namespace std;

void ExibirSaldo(const Conta& conta) {
    cout.precision(2);
    cout << fixed;
    cout << "Seu saldo e de R$:" << conta.getSaldo() << endl;
   
}
void RealizarSaque(Conta& conta) {
    conta.sacar(200);
}

int main()
{
    Conta umaConta("4931-5", Titular(Cpf("163.897.000-91"), "gabriel"));
    ContaPoupanca outraConta("48931-5", Titular(Cpf("163.897.000-91"), "jorge"));
    umaConta.depositar(500);
    umaConta.sacar(200);
    outraConta.depositar(500);
    outraConta.sacar(200);
    ExibirSaldo(umaConta);
    ExibirSaldo(outraConta);
    // pode-se utilizar nomeDaClasse:: quando o metodo for estatico
    cout << "Numero de contas  : " << Conta::getNumeroDeContas() << endl;

    Funcionario funcionario(Cpf("474.124.770-80"), "Jorge", 450.4);
    cout << " Nome do funcionario " << funcionario.getNome() << endl;
}