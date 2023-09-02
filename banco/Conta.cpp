#include<iostream>
#include "Conta.hpp"


//um contador que ira incrementar todas as contas que foram abertas
int Conta::numeroDeContas = 0;

//Construtor da classe
//lista de inicialização, quando declaramos desta forma poupamos um processo a mais
//quando usamos this-> nosso sistema precisa fazer uma copia
//quando usamos um construtor inicializavel, deixamos o mesmo imutavel

Conta::Conta(std::string numeroConta, Titular titular)
    :numeroConta(numeroConta),titular(titular),saldo(0)
{
        
    numeroDeContas++;

}

Conta::~Conta(){
    
    numeroDeContas--;
}


void Conta::sacar(float valorASacar){
    if(valorASacar < 0){
        std::cout << "Não pode sacar valor negativo" << std::endl;
        return;
    }
    if(valorASacar > saldo){
        std::cout << "Saldo insuficiente" << std::endl;
        return;
    }
    
    saldo-=valorASacar;
}

void Conta::depositar(float valorADepositar)
{
    if(valorADepositar < 0){
        std::cout << "Não pode depositar valores negativos" << std::endl;
        return;
    }
     saldo+= valorADepositar;
}

std::string Conta::getNameHolder()
{
    return this->titular.nome;
}

std::string Conta::numberAccount()
{
    return this->numeroConta;
}

float Conta::getBalance()
{   
    return this->saldo;
}

int Conta::recuperaNumeroDeContasAbertas(){
    
    return numeroDeContas;
    
}



