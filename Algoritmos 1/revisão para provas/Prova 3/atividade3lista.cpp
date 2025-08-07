#include <bits/stdc++.h>
using namespace std;

int main(){
    int tam; cin >> tam;
    int soma = 0;
 int vet[tam] = {0};
 for(int i = 0; i < tam; i++){
    cin >> vet[i];
    soma = soma + vet[i];
 }
 cout << soma;

return 0;
}