#include <bits/stdc++.h>
using namespace std;
#define tamvetor 5

void menor(int vet[], int tam){
    int n;
    for(int i = 0; i < 5; i++){
        cin >> n;
        vet[i] = {n};
        if(vet[i] < 10){
            cout << "Indice: " << i << ", Valor: " << vet[i] << endl;
        }
    }

}

int main(){
int vet[tamvetor];
menor(vet,tamvetor);

    return 0;
}