#include "Classes.h"
#include <iostream>
#include <stdio.h>
#include <string.h>


Conta::Conta (){

    strcpy(nome,"\0");
    numero = 0;
    saldo = 0;

}

Conta::Conta(char* n,int num,float s){

    strcpy(nome, n);
    numero = num;
    saldo = s;

}


void Conta::depositar(int d){

    saldo = saldo + d;
}

void Conta::extrato(){}

ContaComum::ContaComum(){};

ContaComum::ContaComum(char* n, int num, float s):Conta(n,num,s){

}

void ContaComum::extrato(){

    cout << "Nome: " << nome << endl;
    cout << "Número: " << numero << endl;
    cout << "Saldo:" << saldo << endl;

}

void ContaComum::getdata(){

    cout << "Digite o nome da conta comum: " << endl;
    cin.getline (nome,30);
    cout << "Digite o número da conta comum: " << endl;
    cin >> numero;
    cout << "Digite o saldo da conta comum: " << endl;
    cin >> saldo;
    system("CLS");
}

ContaPoupanca::ContaPoupanca(){

    strcpy(aniversario,"\0");
};

ContaPoupanca::ContaPoupanca(char* n, int num, float s, char* a):Conta(n,num,s){

    strcpy(aniversario,a);

}

void ContaPoupanca::extrato(){

    cout << "Nome: " << nome << endl;
    cout << "Número: " << numero << endl;
    cout << "Saldo:" << saldo << endl;
    cout << "Dia do Aniversário: " << aniversario << endl;

}

void ContaPoupanca::getdata(){

    cout << "Digite o nome da conta poupança: " << endl;
    fflush(stdin);
    cin.getline (nome,30);
    cout << "Digite o número da conta poupança: " << endl;
    cin >> numero;
    cout << "Digite o saldo da conta poupança: " << endl;
    cin >> saldo;
    cout << "Digite o dia do aniversário da conta poupança: " << endl;
    cin >> aniversario;
    system("CLS");

}

    void pushX(int num)
		  {
            for(int i=0;i<num;i++)
            cout<<" ";
          }

void frontscreen(){



	system("color 1F");
        for(int j=0;j<60;j++)
		{
        system("CLS");
        pushX(j-11);
        cout<<"TE353 - Programacão Orientada a Objetos"<<endl;
        cout<<"***************************************************************************************"<<endl;
        pushX(j);
        cout<<"Bem-vinda Professora Giselle"<<endl;
        cout<<"***************************************************************************************"<<endl;
        pushX(j+5);
        cout<<"Rafael Gustavo Grassani"<<endl;
        cout<<"***************************************************************************************"<<endl;
        pushX(j+16);
        cout<<"Polimorfismo"<<endl;
        cout<<"***************************************************************************************"<<endl;
        cout<<endl<<endl;

	   }

	   	cout<<"Digite qualquer tecla para continuar..."<<endl;
	   	getch();
	   	system("CLS");

}

