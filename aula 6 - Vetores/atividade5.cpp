#include <bits/stdc++.h>
using namespace std;

int main(){
    int vet[3], vet2[3],vet3[3];
    for(int i= 0; i < 3; i++){
        cin >> vet[i];
    }
    for(int i= 0; i < 3; i++){
        cin >> vet2[i];
    }
    for(int i= 0; i < 3; i++){
        vet3[i] = vet[i] + vet2[i];
        cout << vet3[i] << " ";
    }
    return 0;
}