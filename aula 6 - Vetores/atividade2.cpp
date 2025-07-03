#include <bits/stdc++.h>
using namespace std;
#define qntd 40

int main(){
    int vet[qntd];
    int contador;
    for(int i=1; i<= qntd; i++){
        vet[i] = i;
        if(i%2 != 0 && i > 0){
            contador = vet[i];
            cout << contador << " ";
        }

    }

    return 0 ;
}