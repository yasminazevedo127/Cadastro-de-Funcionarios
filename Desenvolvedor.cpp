#include <iostream>
#include <string>
#include "Funcionario.h"
#include "Desenvolvedor.h"
using namespace std;

// Construtor da classe Desenvolvedor. Recebe id, nome, quantidade de projetos e salário base como parâmetros.
Desenvolvedor::Desenvolvedor (int id, string nome, int quantidadeDeProjetos, float salarioBase){
    this->tipo = "Desenvolvedor";
    this->setId(id);
    this->setNome(nome);
    this->setSalarioBase(salarioBase);
    this->quantidadeDeProjetos = quantidadeDeProjetos;
}

// Método que calcula o salário final: salário base + 500 por projeto
float Desenvolvedor::calcularSalarioFinal(){
    return (getSalarioBase() + (500 * this->quantidadeDeProjetos));
}

// Retorna a quantidade de projetos do desenvolvedor
int Desenvolvedor::getQuantidadeDeProjetos(){
    return this->quantidadeDeProjetos;
}

// Exibe todas as informações do desenvolvedor
void Desenvolvedor::exibirInformacoes(){
    cout << "ID: " << getId() << endl;
    cout << "Nome: " << getNome() << endl;
    cout << "Tipo: " << this->tipo << endl;
    cout << "Projetos: " << getQuantidadeDeProjetos() << endl;
    cout << "Salário base: " << getSalarioBase() << endl;
    cout << "Salário final: " << calcularSalarioFinal() << endl;
    cout << "" << endl;
}