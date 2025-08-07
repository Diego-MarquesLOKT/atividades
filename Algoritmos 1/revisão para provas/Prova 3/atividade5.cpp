#include <bits/stdc++.h>
using namespace std;

int media(int vet[], int tam){
    int soma = 0;
for(int i = 0; i < tam; i++){
    cin >> vet[i];
    soma += vet[i];

}
return soma/tam;

}

int main(){
    int tam;
    cin >> tam;
    int vet[tam] = {0};
    int recebe = media(vet,tam);
    cout << "Média é: "<<  recebe << endl;
    return 0;
}