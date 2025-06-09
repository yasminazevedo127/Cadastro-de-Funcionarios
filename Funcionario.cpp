#include <iostream>
#include <string>
#include "Funcionario.h"
using namespace std;

void Funcionario::setNome(string nome){
    this->nome = nome; 
}

// Retorna o nome do funcionário
string Funcionario::getNome(){return this->nome;}

void Funcionario::setSalarioBase(float SalarioBase){
    this->salarioBase = SalarioBase;
}

// Retorna o salário base do funcionário
float Funcionario::getSalarioBase(){return this->salarioBase;}

// Define o ID do funcionário
void Funcionario::setId(int Id){
    this->id = Id;
}

// Retorna o ID do funcionário
int Funcionario::getId(){return this->id;}

// Retorna o tipo do funcionário
string Funcionario::getTipo(){return this->tipo;}

// Exibe as informações básicas do funcionário
void Funcionario::exibirInformacoes(){
    cout << "ID: " << getId() << endl;
    cout << "Nome: " << getNome() << endl;
    cout << "Salario Base: " << getSalarioBase() << endl;
}