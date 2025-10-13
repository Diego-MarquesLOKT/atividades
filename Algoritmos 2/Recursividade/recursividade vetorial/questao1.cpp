#include <bits/stdc++.h>
using namespace std;

int menor(int vet[], int n){
    if(n == 1){
        return 0;
    }

    int nmenor= menor(vet + 1 ,n - 1)

    if(vet[0] < nmenor){
        return vet[0];
    }else
    return nmenor;
}

int main(){
    int vet = [2,6,7,1,2,3,5,1,-1];
    int n = 9;
        cout << "Menor Valor: " << menor(vet,n) << endl;

    return 0;
}