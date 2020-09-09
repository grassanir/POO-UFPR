#include <iostream>
#include "Classes.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    frontscreen();
    Conta *A[3];
    ContaComum B("Rafael", 1234, 100);
    ContaPoupanca C("Daniel", 4321, 300, "15");
    ContaComum D;
    ContaPoupanca E;
    A[0] = &B;
    A[1] = &C;
    A[2] = &D;
    A[3] = &E;

    D.getdata();
    E.getdata();


    A[0] -> depositar(100);
    cout << "---------------------------------" << endl;
    cout << "Dados da conta comum B: " << endl;
    A[0] -> extrato();
    A[1] -> depositar(200);
    cout << "---------------------------------" << endl;
    cout << "Dados da conta poupança C: " << endl;
    A[1] -> extrato();
    A[2] -> depositar(1000);
    cout << "---------------------------------" << endl;
    cout << "Dados da conta comum D: " << endl;
    A[2] -> extrato();
    A[3] -> depositar(1600);
    cout << "---------------------------------" << endl;
    cout << "Dados da conta poupança E: " << endl;
    A[3] -> extrato();
    cout << "---------------------------------" << endl;



    return 0;
}
