#include <iostream>
#include "Classes.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    frontscreen();
    CarroPasseio A, B(4,110,500,170,30000, "Prata", "Megane");
    Caminhao C, D(8,300,3000,120,500000,3,4,16);
    cout << "-----------------------------------------------" << endl;
    cout << "Digite os dados do Carro de Passeio: " << endl;
    A.getdata();
    cout << "-----------------------------------------------" << endl;
    cout << "Digite os dados do Caminhão: " << endl;
    C.getdata();
    system("CLS");
    cout << "-----------------------------------------------" << endl;
    cout << "Dados do Carro de Passeio A: " << endl;
    A.putdata();
    cout << "-----------------------------------------------" << endl;
    cout << "Dados do Carro de Passeio B: " << endl;
    B.putdata();
    cout << "-----------------------------------------------" << endl;
    cout << "Dados do Caminhão C: " << endl;
    C.putdata();
    cout << "-----------------------------------------------" << endl;
    cout << "Dados do Caminhão D: " << endl;
    D.putdata();
    cout << "-----------------------------------------------" << endl;
    return 0;
}
