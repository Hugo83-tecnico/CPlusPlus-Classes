#include <iostream>
#include <string>
#include "CPF.hpp"

CPF::CPF(std::string numero):numero(numero)
{
    validaCPF();
}
std::string CPF::recuperaNumero()
{
    return numero;
}
void CPF::validaCPF()
{
    if(numero.size() < 11){
        std::cout << "Numero do cpf contem caracteres insuficientes!" << std::endl;
        exit(1);
    }
}
