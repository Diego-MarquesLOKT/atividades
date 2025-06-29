#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int contador = 0;
for(int cont = 0; cont < n; cont++){
    if(cont%2 != 0){
        contador += cont;
    }
}

    cout << contador;
    return 0;
}