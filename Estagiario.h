#ifndef _ESTAGIARIO_H_
#define _ESTAGIARIO_H_

class Estagiario : public Funcionario {
private:
    int horasTrabalhadas; 
public:
    Estagiario(int id, std::string nome, int horasTrabalhadas, float salarioBase);
    int getHorasTrabalhadas();
    float calcularSalarioFinal();
    void exibirInformacoes();
};

#endif