#include <bits/stdc++.h>
using namespace std;
#define tam 5

void verificador(int vet[], int tama){
    int vetmenor = vet[0];
    
    for(int i = 0 ; i < tama; i++){
        if(vetmenor < vet[i]){
            vetmenor = vet[i];
        }


    }
    cout << "Maior numero: " << vetmenor;

}

int main(){
    int vet[tam] = {0};
    for(int i = 0; i < tam; i++){
        cin >> vet[i];
    }
    verificador(vet,tam);

    return 0;
}