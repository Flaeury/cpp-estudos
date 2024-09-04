#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <windows.h> // Necessário para alterar a codificação no Windows
#include "first.cpp"
#include <windows.h>
// %d INTEIROS
// %F FLOAT

// %C CHAR
// fflush(stdin); PARA LIMPAR O BUFFER
// 

using namespace std;

int main() {  
    setlocale(LC_ALL, "pt_BR.UTF-8");
    SetConsoleOutputCP(CP_UTF8);

    soma0a10();

    return 0;
}