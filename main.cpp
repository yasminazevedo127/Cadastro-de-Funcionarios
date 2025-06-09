#include <iostream>
#include <string>
#include <fstream>
#include "Funcionario.h"
#include "Desenvolvedor.h"
#include "Estagiario.h"
#include "Gerente.h"
using namespace std;

int main() {
    // Vetor de ponteiros para armazenar até 10 funcionários
    Funcionario *funcionarios[10] = {nullptr};
    int quantidadeDeFuncionarios;

    // Solicita ao usuário a quantidade de funcionários a registrar
    cout << "Quantos funcionarios deseja registrar?(min 6, max 10) ";
    cin >> quantidadeDeFuncionarios;

    // Verifica se a quantidade está no intervalo permitido
    if (quantidadeDeFuncionarios >= 6 && quantidadeDeFuncionarios <= 10) {
        for (int ii = 0; ii < quantidadeDeFuncionarios;) {
            // Exibe o número do funcionário e solicita o cargo
            cout << "\nCadastro do funcionario #" << (ii + 1) << endl;
            cout << "Escolha o cargo:\n1 - Desenvolvedor\n2 - Estagiario\n3 - Gerente\nCargo: ";
            int cargo;
            cin >> cargo;
            cin.ignore(); // Limpa o buffer do teclado

            // Variáveis comuns
            int id;
            string nome;
            float salarioBase;

            // Verifica o tipo de funcionário
            switch (cargo) {
                case 1: { // Desenvolvedor
                    int projetos;

                    // Coleta os dados
                    cout << "ID: ";
                    cin >> id;
                    cin.ignore();
                    cout << "Nome: ";
                    getline(cin, nome);
                    cout << "Projetos: ";
                    cin >> projetos;
                    cin.ignore();
                    cout << "Salário base: ";
                    cin >> salarioBase;
                    cin.ignore();

                    // Cria o objeto Desenvolvedor e armazena no vetor
                    funcionarios[ii] = new Desenvolvedor(id, nome, projetos, salarioBase);
                    break;
                }
                case 2: { // Estagiário
                    int horasTrabalhadas;

                    // Coleta os dados
                    cout << "ID: ";
                    cin >> id;
                    cin.ignore();
                    cout << "Nome: ";
                    getline(cin, nome);
                    cout << "Horas Trabalhadas: ";
                    cin >> horasTrabalhadas;
                    cin.ignore();
                    cout << "Salário base: ";
                    cin >> salarioBase;
                    cin.ignore();

                    // Cria o objeto Estagiario e armazena no vetor
                    funcionarios[ii] = new Estagiario(id, nome, horasTrabalhadas, salarioBase);
                    break;
                }
                case 3: { // Gerente
                    float bonus;

                    // Coleta os dados
                    cout << "ID: ";
                    cin >> id;
                    cin.ignore();
                    cout << "Nome: ";
                    getline(cin, nome);
                    cout << "Bônus: ";
                    cin >> bonus;
                    cin.ignore();
                    cout << "Salário base: ";
                    cin >> salarioBase;
                    cin.ignore();

                    // Cria o objeto Gerente e armazena no vetor
                    funcionarios[ii] = new Gerente(id, nome, bonus, salarioBase);
                    break;
                }
                default:
                    // Mensagem de erro para cargo inválido
                    cout << "Tipo inválido! Tente novamente.\n";
                    continue; // Retorna ao início do loop sem avançar o índice
            }

            ii++; // Avança para o próximo funcionário somente se o tipo for valido
        }

        // Exibe as informações de todos os funcionários
        cout << "\nInformações dos funcionários cadastrados:\n";
        for (int ii = 0; ii < quantidadeDeFuncionarios; ++ii) {
            funcionarios[ii]->exibirInformacoes();
        }

        // Libera a memória alocada dinamicamente
        for (int ii = 0; ii < quantidadeDeFuncionarios; ++ii) {
            delete funcionarios[ii];
        }

    } else {
        // Mensagem se a quantidade for inválida
        cout << "Quantidade invalida!" << endl;
    }

    return 0; 
}