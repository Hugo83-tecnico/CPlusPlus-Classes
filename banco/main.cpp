#include <iostream>
#include <string>
#include "Conta.hpp"
#include "Titular.hpp"
#include "CPF.hpp"

using namespace std;

void printBalance(float value);

int main(int argc, char **argv)
{
    //Necessario fazer uma conversão explicita
    //-> class CPF explicit CPF(std::string numero);
    Conta conta1("234-5", Titular("Joao Da Silva",CPF("000.000.000-040")));
    
    conta1.depositar(200.00);
    printBalance(conta1.getBalance());
    
    //Para acessar mebros estaticos da classe Conta::
    //cout<< "Numero de contas abertas: " << Conta::recuperaNumeroDeContasAbertas() << endl;
    
	return 0;
}

void printBalance(float value)
{
    cout << "Saldo atual R$: " << value << endl;
}