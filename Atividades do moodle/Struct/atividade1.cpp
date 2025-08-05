#include <bits/stdc++.h>
using namespace std;
struct medidas{
    char nome[100];
    float altura;
    
};
struct Atleta{
    char esporte[100];
    float peso;
    int idade;
    medidas med;
};
int main(){
    Atleta atletaa;
     cin.getline(atletaa.med.nome,100);
   
    cin >> atletaa.peso;
    cin >> atletaa.med.altura;
    cin.ignore();
    cin.getline(atletaa.esporte,100);
    cin >> atletaa.idade;
        cout << "Nome: " << atletaa.med.nome << endl;
        
        cout << setprecision(1) << fixed <<"Peso: " << atletaa.peso << " kg" << endl;
        cout << setprecision(2) << fixed;
        cout << "Altura: " << atletaa.med.altura << " m" << endl;
        cout << "Esporte: " << atletaa.esporte << endl;
        cout << "Idade: " << atletaa.idade << " anos" << endl;
return 0;
}