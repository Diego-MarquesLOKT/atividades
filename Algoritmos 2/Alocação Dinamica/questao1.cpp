#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    int cont = 0;
    int media;
    cin >> n;

    int *ptr = new int[n];
    for(int i = 0; i < n; i++){
       cin >> ptr[i];
       
    }
    for(int i = 0; i < n; i++){
        cont += ptr[i];

    }
        media = cont/n;
    delete [] ptr;
    cout << "Média: " << media; 
    return 0;
}