#include <bits/stdc++.h>

using namespace std;

float fatorial(float n){

if(n == 1){
    return 1;
}
return n* fatorial(n-1);
}


int main()
{
    float n;
    cout << "Digite o numero de fatorial: " << endl;
    cin >> n;

    cout << "O fatorial de " << n << " é: " << fatorial(n);
    return 0;
}
