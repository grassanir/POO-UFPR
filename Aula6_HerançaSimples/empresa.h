#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

class Empresa {

	private:

    string nome;
    string endereco;
    string cidade;
    string estado;
    double CEP;
    double telefone;

	public:

		Empresa();
		Empresa (string, string, string, string, double, double);
        getdata();
        putdata();
};