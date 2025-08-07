#include <bits/stdc++.h>
using namespace std;

int main(){
int n;
int multiplicador = 0;
cin >> n;
for(int cont = 1; cont <= n; cont ++){
    multiplicador = n * cont;
    cout << n << " x " << cont << " = " << multiplicador <<endl;
    
    }
    return 0;
}