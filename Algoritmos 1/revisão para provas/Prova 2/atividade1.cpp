#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1;
    int n;
    int contador = 0;
        cin >> n1;
    for(int cont = 0; cont < n1; cont++){
        cin >> n;
            if( n < 0){
            contador++;
            }
        }
    cout << contador << endl;
        return 0;
}