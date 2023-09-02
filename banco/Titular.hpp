#pragma once
#include <iostream>
#include <string>
#include "CPF.hpp"

class Titular
{
//Atributos
public:
    CPF numeroCPF;
    std::string nome;
    
//Metdos
private:
    void validaNomeTitular();
public:
    Titular(std::string nome, CPF numeroCPF);
    
};

