#include <bits/stdc++.h>
using namespace std;

void fat(int n){
    int fato = n;
    while(n < 0){
        cout << " -1 " << endl;
        cout << "Valor inválido, digite outro valor : "; cin >> n;
    }
    for(int cont = 1;cont != n; cont++ ){
        fato *= cont;

    }
    cout << fato;
}
int main(){
    int n1;
    cin >> n1;
    fat(n1);
    return 0;
}