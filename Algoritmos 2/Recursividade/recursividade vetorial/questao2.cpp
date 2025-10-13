#include <bits/stdc++.h>
using namespace std;

int pares(int vet[], int n){
    if(n == 0){
        return 0;
    }

    int ultimopar = pares(vet[n-1] % 2 == 0) ? 1 : 0;

    return pares(vet,n-1) + ultimopar;

}

int main(){
    int vetor[] = {2,8,100,500,327,433,221}
    int n = 7;
    cout<< "Quantidade de pares: " << pares(vetor,n) << endl;
    return 0;
}