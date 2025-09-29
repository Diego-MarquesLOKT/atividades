#include <bits/stdc++.h>
using namespace std;

int* indicesPares(int vet[], int n){
    int tamanho = (n + 1)/ 2;
    int *vetPares = new int[tamanho];
    for(int i = 0; i < n; i +=2){
        vetPares[i/2]= vet[i];
        
    }
    return vetPares;
}

int main(){
    int n;
    cin >> n;

    int *vet= new int[n];
    for(int i = 0; i < n; i++){
        cin >> vet[i];
    }
    int * vetPares = indicesPares(vet,n);

    int m = (n+1)/2;
    for(int i = 0; i < m; i++){
        cout << vetPares[i] << " " ;
    }
    delete [] vet;
    return 0;
}