#pragma once
#include <iostream>
#include <string>
#include "Titular.hpp"

class Conta
{
private:
    static int numeroDeContas; //variavel sera compartilhado com todas as instancias da classe Conta
public:
    static int recuperaNumeroDeContasAbertas();

//Atributos
private:
    Titular titular;
    std::string numeroConta;
    float saldo;
   
//Metodos
private:
    

public:
    
    Conta(std::string numeroConta,Titular titular);
    ~Conta();
    void sacar(float valorASacar);
    void depositar(float valorADepositar);
    std::string getNameHolder();
    std::string getId();
    std::string numberAccount();
    float getBalance() ;
    void printBalance();
};