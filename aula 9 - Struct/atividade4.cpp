#include <bits/stdc++.h>
using namespace std;
struct medidas{
    char nome[100];
    float altura;
    
};
struct atletaa{
    char nome[100];
    char esporte[100];
    int idade;
    medidas med;
};
int main(){
    atletaa atleta;
    cout << "Digite seu nome: "; cin.getline(atleta.nome,100);
    
    cout << "Agora, suas medidas (Peso e altura): "; 
    cin.ignore();
    cin >> atleta.med.peso;
    cout << "\n Altura: "; 
    cin >> atleta.med.altura;
    cin.ignore();
    cout << "Esporte praticado: "; cin.getline(atleta.esporte,100);
    cout << "Idade: "; 
    cin >> atleta.idade;

return 0;
}