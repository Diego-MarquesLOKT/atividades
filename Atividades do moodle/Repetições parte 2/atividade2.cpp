#include <bits/stdc++.h>
using namespace std;

void funcao(int n1, int n2){
    int numaior,numenor;
    
    if(n1 > n2){
        numaior = n1;
        numenor = n2;
    }else{
        numaior = n2;
        numenor = n1;
    }
    int contador = 0;
    for(int i = numenor; i <= numaior; i++){
        if(i % 2 != 0){
            contador++;
        }

    }
    cout << "Quantidade de impares: " << contador;
}

int main(){
    int n1, n2; cin >> n1 >> n2;
    funcao(n1,n2);
return 0;
}