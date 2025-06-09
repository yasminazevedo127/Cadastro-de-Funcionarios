main: main.o Funcionario.o Desenvolvedor.o Estagiario.o Gerente.o
	g++ main.o Funcionario.o Desenvolvedor.o Estagiario.o Gerente.o -o main
main.o: main.cpp Funcionario.h Desenvolvedor.h Estagiario.h Gerente.h
	g++ main.cpp -c 
Funcionario.o: Funcionario.cpp Funcionario.h
	g++ Funcionario.cpp -c 
Desenvolvedor.o: Desenvolvedor.cpp Desenvolvedor.h Funcionario.h
	g++ Desenvolvedor.cpp -c 
Estagiario.o: Estagiario.cpp Estagiario.h Funcionario.h
	g++ Estagiario.cpp -c 
Gerente.o: Gerente.cpp Gerente.h Funcionario.h
	g++ Gerente.cpp -c
clean:
	rm -f *.o main