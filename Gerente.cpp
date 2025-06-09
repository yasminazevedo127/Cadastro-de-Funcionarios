#include <iostream>
#include <string>
#include "Funcionario.h"
#include "Gerente.h"
using namespace std;

// Construtor da classe Gerente. Recebe id, nome, bônus mensal e salário base como parâmetros.
Gerente::Gerente(int id, string nome, float bonusMensal, float salarioBase){
    this->tipo = "Gerente";
    this->setId(id);
    this->setNome(nome);
    this->setSalarioBase(salarioBase);
    this->bonusMensal = bonusMensal;
}

// Calcula o salário final do gerente somando o salário base com o bônus mensal
float Gerente::calcularSalarioFinal(){
    return (getSalarioBase() + this->bonusMensal);
}

// Exibe as informações do gerente
void Gerente::exibirInformacoes(){
    cout << "ID: " << getId() << endl;
    cout << "Nome: " << getNome() << endl;
    cout << "Tipo:" << this->tipo << endl;
    cout << "Bônus: " << this->bonusMensal << endl;
    cout << "Salário base: " << getSalarioBase() << endl;
    cout << "Salário final: " << calcularSalarioFinal() << endl;
    cout << "" << endl;
}