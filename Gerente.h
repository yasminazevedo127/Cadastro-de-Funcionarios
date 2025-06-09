#ifndef _GERENTE_H_
#define _GERENTE_H_

class Gerente : public Funcionario{
private:
    float bonusMensal;
public:
    Gerente(int id, std::string nome, float bonusMensal, float salarioBase);
    float calcularSalarioFinal();
    void exibirInformacoes();
};

#endif 