//questão 4 pede pra ler os numeros impares descrescente de 100
#include <bits/stdc++.h>
using namespace std;

int main(){

for(int i = 100; i >= 1; i--){
    if( i % 2 == 0){
        cout << i << " ";
    }
}


    return 0;
}