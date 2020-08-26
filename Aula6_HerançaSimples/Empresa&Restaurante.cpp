#include "Empresa&Restaurante.h"

Empresa::Empresa()
{

}

Empresa::Empresa (string n, string e, string cid, string est, string cep, string tel){

    this->nome = n;
    this->endereco = e;
    this->cidade = cid;
    this->estado = est;
    this->CEP = cep;
    this->telefone = tel;
}

void Empresa::getdata(){

    cout << "Digite o nome da empresa:" << endl;
    getline(cin, nome);
    cout << "Digite o endereço da empresa:" << endl;
    getline(cin, endereco);
    cout << "Digite a cidade da empresa:" << endl;
    getline(cin, cidade);
    cout << "Digite o estado da empresa:" << endl;
    getline(cin, estado);
    cout << "Digite o CEP da empresa:" << endl;
    getline(cin, CEP);
    cout << "Digite o telefone da empresa:" << endl;
    getline(cin, telefone);


}

void Empresa::putdata(){

    cout << "Nome: " << nome << endl;
    cout << "Endereço: " << endereco << endl;
    cout << "Cidade: " << cidade << endl;
    cout << "Estado: " << estado << endl;
    cout << "CEP: " << CEP << endl;
    cout << "Telefone: " << telefone << endl;
}

Restaurante::Restaurante()
{

}

Restaurante::Restaurante(string n, string e, string cid, string est, string cep, string tel, string c, string p):Empresa(n,e,cid,est,cep,tel)
{
    this->prato = c;
    this->preco = p;
}

void Restaurante::getdata(){

    Empresa::getdata();
    cout << "Digite o tipo de comida:" << endl;
    getline(cin, prato);
    cout << "Digite o preço médio do prato:" << endl;
    cin >> preco;
    system("CLS");
    cout << "----------------------------------------------" << endl;

}

void Restaurante::putdata(){

    Empresa::putdata();
    cout << "Tipo de comida: " << prato << endl;
    cout << "Preço médio: " << preco << endl;
    cout << "----------------------------------------------" << endl;
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
        pushX(j+13);
        cout<<"Herança Simples"<<endl;
        cout<<"***************************************************************************************"<<endl;
        cout<<endl<<endl;

	   }

	   	cout<<"Digite qualquer tecla para continuar..."<<endl;
	   	getch();
	   	system("CLS");

}
