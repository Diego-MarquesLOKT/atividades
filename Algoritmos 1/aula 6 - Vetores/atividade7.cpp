#include <bits/stdc++.h>
using namespace std;
#define valor 20
int main(){
int vet[valor];
int menor= 0, guarda=0;
for(int i = 0; i < valor; i++){

    cin>> vet[i];
    int menorvet = vet[0];
    for(int i = 1; i < valor; i++){
        if(vet[i] < menorvet){
            menorvet = vet[i];
        }
    }

}
cout << "Menor valor : " << menor << endl;
cout << "índice: " << guarda; 

    return 0;
}