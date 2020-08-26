#include <iostream>
#include <conio.h>
#include <locale.h>

using namespace std;

//Declarando classe mãe empresa com seus atributos

class Empresa {

	private:

    string nome;
    string endereco;
    string cidade;
    string estado;
    string CEP;
    string telefone;

	public:

// Construtores com e sem parâmetros da classe mãe

		Empresa();
		Empresa (string, string, string, string, string, string);
        void getdata();
        void putdata();
};

//Declarando classe filha Restaurante com seus atributos e utilizando
// a herança de sua classse mãe Empresa.

class Restaurante : public Empresa
{
    private:

     string prato;
     string preco;

    public:

// Construtores com e sem parâmetros da classe filha

        Restaurante();
        Restaurante (string, string, string, string, string, string, string, string);
        void getdata();
        void putdata();


};

//Funções para animação de tela
void pushX(int);
void frontscreen();

