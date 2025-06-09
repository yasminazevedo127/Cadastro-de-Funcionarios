#ifndef _DESENVOLVEDOR_H_
#define _DESENVOLVEDOR_H_

class Desenvolvedor : public Funcionario{
private:
    int quantidadeDeProjetos; 
public:
    Desenvolvedor (int id, std::string nome, int quantidadeDeProjetos, float salarioBase);
    int getQuantidadeDeProjetos();
    float calcularSalarioFinal();
    void exibirInformacoes();
};

#endif