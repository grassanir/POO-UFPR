#include "Classes.h"
#include <iostream>
#include <stdio.h>


Motor::Motor (){

    NumCilindro = 0;
    Potencia = 0;

}


Motor::Motor (int c, int p){

    NumCilindro = c;
    Potencia = p;
}

void Motor::getdata(){

    cout << "Digite o número de cilindros: " << endl;
    cin >> NumCilindro;
    cout << "Digite a potência: " << endl;
    cin >> Potencia ;


}

void Motor::putdata(){

    cout <<"Número de Cilindros: " << NumCilindro << endl;
    cout <<"Potência: " << Potencia << endl;

}


Veiculo::Veiculo (){

    Peso = VelocMax = 0;
    Preco = 0;

}

Veiculo::Veiculo (int pes, int vm, float pr){

    Peso = pes;
    VelocMax = vm;
    Preco = pr;

}
void Veiculo::getdata(){

    cout << "Digite o peso: " << endl;
    cin >> Peso ;
    cout << "Digite a velocidade máxima: " << endl;
    cin >> VelocMax;
    cout << "Digite o preco: " << endl;
    cin >> Preco;




}
void Veiculo::putdata(){

    cout <<"Peso: " << Peso << endl;
    cout <<"Velocidade Maxima: " << VelocMax << endl;
    cout <<"Preco: " << Preco << endl;
}


CarroPasseio::CarroPasseio(){

    Cor = "\0";
    Modelo = "\0";

}
CarroPasseio::CarroPasseio(int c, int p, int pes, int vm , float pr , string cor, string mod):Motor(c,p),Veiculo(pes, vm, pr){

    this->Cor = cor;
    this->Modelo = mod;


}

void CarroPasseio::getdata(){

    Motor::getdata();
    Veiculo::getdata();
    cout << "Digite a cor:" << endl;
    fflush(stdin);
    getline(cin, Cor);
    cout << "Digite o Modelo:" << endl;
    getline(cin, Modelo);

}
void CarroPasseio::putdata(){

    Motor::putdata();
    Veiculo::putdata();
    cout << "Cor:" << Cor << endl;
    cout << "Modelo:" << Modelo << endl;

}


Caminhao::Caminhao(){

    Toneladas = AlturaMax = Comprimento = 0;

}
Caminhao::Caminhao(int c, int p, int pes, int vm , float pr, int ton, int am, int com):Motor(c,p),Veiculo(pes, vm, pr){

    Toneladas = ton;
    AlturaMax = am;
    Comprimento = com;
}
void Caminhao::getdata(){

    Motor::getdata();
    Veiculo::getdata();
    cout << "Digite as toneladas: " << endl;
    cin >> Toneladas ;
    cout << "Digite a altura maxima: " << endl;
    cin >> AlturaMax ;
    cout << "Digite o comprimento: " << endl;
    cin >> Comprimento ;

    }
void Caminhao::putdata(){

    Motor::putdata();
    Veiculo::putdata();
    cout << "Toneladas: " << Toneladas << endl;
    cout << "Altura maxima: " << AlturaMax << endl;
    cout << "Comprimento: " << Comprimento << endl;
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
        pushX(j+12);
        cout<<"Herança Múltipla"<<endl;
        cout<<"***************************************************************************************"<<endl;
        cout<<endl<<endl;

	   }

	   	cout<<"Digite qualquer tecla para continuar..."<<endl;
	   	getch();
	   	system("CLS");

}

