#include <bits/stdc++.h>
using namespace std;
struct medidas{
    float peso;
    float altura;
};

int main(){
    medidas joao,maria;
    cin >> joao.altura;
    cin>> maria.altura;
    cin >> joao.peso;
    cin >> maria.peso;    
    cout << "O peso e altura fornecidas são: " << joao.peso << "\n"  << maria.peso<< " Kgs"<< endl;
    cout << "A altura fornecida é: " << joao.altura << "\n" << maria.altura << endl;
    float mediaaltura = (joao.altura+maria.altura)/2
    float mediapeso = (joao.peso+maria.peso)/2
    cout << "Media altura: " << mediaaltura << endl;
    cout << "Media peso: " << mediapeso << endl;
return 0;
}