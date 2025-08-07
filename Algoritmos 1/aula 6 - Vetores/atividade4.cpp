#include <bits/stdc++.h>
using namespace std;
#define const 7
int main(){
    int vet[const];
    int n;
    int soma = 0;
for(int i=0; i < const; i++){
cin >> vet[i];
soma += vet[i];
}

cout << soma/const << " ";
    return 0;
}