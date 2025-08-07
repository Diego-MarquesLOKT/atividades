#include <bits/stdc++.h>
using namespace std;

int main(){
    cout <<"Quantas letras você quer? " << endl;
    int tam; cin >> tam;
char string[tam];
cout << "Digite a palavra e leremos pra você : " << endl;
cin.getline(string,tam);
cin >> string;
cout << string << endl;
return 0;
}