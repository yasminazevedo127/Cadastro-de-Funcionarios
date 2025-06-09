# Cadastro-de-Funcionarios

Este projeto em C++ permite o cadastro de funcionários com diferentes cargos: Desenvolvedor, Estagiário e Gerente. O sistema coleta informações específicas de cada cargo, calcula o salário final e exibe os dados cadastrados.

## Cargos e Regras

- **Desenvolvedor**: salário final = salário base + 500 * número de projetos.
- **Estagiário**: salário final = salário base proporcional às horas trabalhadas (baseado em 160 horas mensais).
- **Gerente**: salário final = salário base + bônus mensal.

## Estrutura do Projeto

- `Funcionario.h / Funcionario.cpp` — Classe base com atributos e métodos comuns.
- `Desenvolvedor.h / Desenvolvedor.cpp` — Derivada de Funcionario, com número de projetos.
- `Estagiario.h / Estagiario.cpp` — Derivada de Funcionario, com horas trabalhadas.
- `Gerente.h / Gerente.cpp` — Derivada de Funcionario, com bônus mensal.
- `main.cpp` — Fluxo principal: entrada de dados, cálculo de salários e exibição.
- `Makefile` — Para compilar e limpar o projeto com facilidade.

## Como Compilar e Executar

No terminal, dentro da pasta do projeto:

### Compilar:

```bash
g++ main.cpp Funcionario.cpp Desenvolvedor.cpp Estagiario.cpp Gerente.cpp -o main
```
### Como usar o programa com um arquivo de entradas (entradas.txt)

Para facilitar testes ou automatizar o cadastro, você pode preparar um arquivo de texto com todas as entradas que o programa espera (simulando o que você digitaria).

## Passos:
	1.	Crie um arquivo chamado entradas.txt com as informações de entrada, ou utilize um já existente.
	2.	Execute o programa redirecionando a entrada padrão para esse arquivo:
 ```bash
  ./main < entradas.txt
 ```
