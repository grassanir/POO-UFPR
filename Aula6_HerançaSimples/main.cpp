#include <iostream>
#include "Empresa&Restaurante.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    frontscreen();
    Restaurante A, B("Restaurante Mahatma Gourmet","R. Prof. Macedo Filho, 199","Curitiba","Paraná","80520-340","(41)3022-6875","Vegetariana", "RS38,00");
    A.getdata();
    cout << "Dados da empresa A: " << endl;
    A.putdata();
    cout << "Dados da empresa B: " << endl;
    B.putdata();
}