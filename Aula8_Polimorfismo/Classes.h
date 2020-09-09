#include <iostream>
#include <conio.h>
#include <locale.h>

using namespace std;

class Conta
{

    protected:
        char nome[30];
        int numero;
        float saldo;

    public:
        Conta();
        Conta(char*,int,float);
        void depositar(int);
        virtual void extrato() = 0;
};

class ContaComum: public Conta
{
    public:
        ContaComum();
        ContaComum(char*,int,float);
        void extrato();
        void getdata();
};

class ContaPoupanca : public Conta
{
    private:
        char aniversario[10];

    public:
        ContaPoupanca();
        ContaPoupanca(char*,int,float,char*);
        void extrato();
        void getdata();
};



//Funções para animação de tela
void pushX(int);
void frontscreen();



