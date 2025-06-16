//questao 5 pede um programa que leia 10 valores reais e imprima o menor valor lido

#include <bits/stdc++.h>
using namespace std;

int main(){
float num,numenor, contagem;
cout << "Leitor de quantos valores reais " << endl;
cin >> contagem;
cin >> num;
numenor = num;
    for(int cont = 0; cont < contagem - 1; cont++ ){
    cin >> num;

        if (numenor > num){
    numenor = num;
        }

    }
cout << numenor << endl; 



    return 0;
}