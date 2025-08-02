#include <bits/stdc++.h>
using namespace std;
struct veiculo{
    char marca[100];
    char modelo[100];
    char placa[100];
    int ano;
    int km;
    int valor;
};

int main(){
    veiculo voyage,fordka;
    cout << "Digite as informações do primeiro veiculo (marca,modelo,placa,ano,km,valor) : ";
    cin.getline(voyage.marca,100);
    cin.getline(voyage.modelo,100);
    cin.getline(voyage.placa,100);
    cin>> voyage.ano;
    cin >> voyage.km;
    cin >> voyage.valor;
    cin.ignore();
    cout << "Digite as informações do segundo veiculo no mesmo modelo: ";
    
    cin.getline(fordka.marca,100);
    cin.getline(fordka.modelo,100);
    cin.getline(fordka.placa,100);
    cin>> fordka.ano;
    cin >> fordka.km;
    cin >> fordka.valor;
    cout << "Informações primeiro veiculo: \n" << "Marca: " << voyage.marca << endl << "Modelo: " << voyage.modelo << endl << "Placa: " << voyage.placa <<endl << "Ano: " << voyage.ano << endl << "Km: " << voyage.km << endl << "Valor" << voyage.valor << endl; 
    cout << "Informações segundo veiculo: \n" << "Marca: " << fordka.marca << endl << "Modelo: " << fordka.modelo << endl << "Placa: " << fordka.placa << endl
    ,<<"Ano: " << fordka.ano << endl << "Km: " << fordka.km << endl << "Valor" << fordka.valor; 
return 0;
}