#pragma once
#include <iostream>
#include <string>

class CPF
{
    
private:
    std::string numero;
    
public:
    explicit CPF(std::string numero);
    std::string recuperaNumero();

//Metodos
private:
    void validaCPF();

};

