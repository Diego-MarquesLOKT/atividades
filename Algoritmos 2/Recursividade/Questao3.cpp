#include <bits/stdc++.h>

using namespace std;

void imprimeDecrescente(int n){
if(n == 0){
    cout << "" << endl;
}
else{
    cout << n << " ";
    imprimeDecrescente(n-1);
}
}


int main()
{
    int n;
    cin >> n;
    imprimeDecrescente(n);
    return 0;
}
