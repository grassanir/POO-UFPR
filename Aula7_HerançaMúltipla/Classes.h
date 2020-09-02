#include <iostream>
#include <conio.h>
#include <locale.h>

using namespace std;

class Motor
{

    private:
        int NumCilindro, Potencia;

    public:
        Motor ();
        Motor (int, int);
        void getdata();
        void putdata();
};

class Veiculo
{

    private:
        int Peso, VelocMax;
        float Preco;

    public:
        Veiculo ();
        Veiculo (int, int, float);
        void getdata();
        void putdata();
};

class CarroPasseio: public Motor, Veiculo
{
private:
    string Cor, Modelo;
public:
    CarroPasseio();
    CarroPasseio(int, int, int, int, float, string, string);
    void getdata();
    void putdata();
};

class Caminhao: public Motor, Veiculo
{
private:
    int Toneladas, AlturaMax, Comprimento;
public:
    Caminhao();
    Caminhao(int, int, int, int, float, int, int, int);
    void getdata();
    void putdata();
};

//Funções para animação de tela
void pushX(int);
void frontscreen();



