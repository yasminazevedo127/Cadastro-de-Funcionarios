#include <iostream>
#include <string>
#include "Funcionario.h"
#include "Estagiario.h"
using namespace std;

// Construtor da classe Estagiario. Recebe id, nome, horas trabalhadas e salário base como parâmetros
Estagiario::Estagiario(int id, string nome, int horasTrabalhadas, float salarioBase) {
    this->tipo = "Estagiario";
    this->setId(id);
    this->setNome(nome);
    this->setSalarioBase(salarioBase);
    this->horasTrabalhadas = horasTrabalhadas;
    
};

// Método que retorna as horas trabalhadas do estagiário
int Estagiario::getHorasTrabalhadas(){
    return this->horasTrabalhadas;
}


// Método que calcula o salário final com base nas horas trabalhadas
// Considera que 160 horas é a carga horária mensal completa
float Estagiario::calcularSalarioFinal(){
    return (getSalarioBase() * (this->horasTrabalhadas / 160.0));
}

// Método que exibe as informações completas do estagiário
void Estagiario::exibirInformacoes(){
    cout << "ID: " << getId() << endl;
    cout << "Nome: " << getNome() << endl; 
    cout << "Tipo: " << this->tipo << endl;
    cout << "Horas Trabalhadas: " << getHorasTrabalhadas() << endl;
    cout << "Salario Base: " << getSalarioBase() << endl;
    cout << "Salário final: " << calcularSalarioFinal() << endl;
    cout << "" << endl; // Linha em branco para separar registros
}