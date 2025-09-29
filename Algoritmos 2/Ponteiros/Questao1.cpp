#include <bits/stdc++.h>
using namespace std;

int main(){
    int *pt;
    cout << "O endereço de pt é: " << &pt << endl;

    int x;
    cin >> x;
    pt = &x;
    cout << "O valor do conteúdo de pt é: " << *pt << endl;
    cout << "O endereço de X é: " << pt << endl;
    *pt = *pt * 10;

    cout << "O conteúdo apontado por PT é: " << *pt << endl;
    pt += 10;
    cout << "O conteúdo de pt é: " << pt << endl;

    return 0;
}