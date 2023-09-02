#include "Titular.hpp"
#include <iostream>

Titular::Titular(std::string nome, CPF numeroCPF):nome(nome), numeroCPF(numeroCPF)
{
    validaNomeTitular();
}

void Titular::validaNomeTitular()
{
    if(nome.size() < 5){
        std::cout << "Nome titular muito curto." << std::endl;
        exit(1);
    }
}

