#include <fstream>
#include <cstring>
#include "Alunos.h"
#include<fstream>
struct Aluno {
    int id;             
    char nome[50];      
    float nota;
    bool ativo;         
};

std::fstream arquivo("dados.bin", std::ios::in | std::ios::out | std::ios::binary);