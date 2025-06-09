#ifndef _FUNCIONARIO_H_
#define _FUNCIONARIO_H_

class Funcionario{
protected:
    std::string nome;
    float salarioBase;
private:
    int id;
public:
    std::string tipo;
    void setNome(std::string); 
    std::string getNome();
    void setSalarioBase(float); 
    float getSalarioBase();
    void setId(int);
    int getId();
    std::string getTipo();
    virtual void exibirInformacoes();
    virtual float calcularSalarioFinal() = 0;
    virtual ~Funcionario(){};
};

#endif