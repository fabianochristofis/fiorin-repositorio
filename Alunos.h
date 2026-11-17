#pragma once
#include <string>
#include<iostream>
#include<fstream>
class Aluno {
private: 
	int matricula;
	char nome[50];
	int nota;
public:
	Aluno();
		void setMatricula(int novaMatricula);
	int getMatricula() const;

	void setNome(const char* novoNome);
	const char* getNome() const;

	void setNota(float novaNota);
	float getNota() const;

};
