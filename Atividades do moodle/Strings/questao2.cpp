#include <bits/stdc++.h>
using namespace std;
#define tam 200
int main(){
    char code[tam];
    int k;
    cin.getline(code,tam);
    
    cin >> k;
    cin.ignore();
    cout << "Mensagem criptografada: ";
    for(int i = 0; code[i] != '\0'; i++){
            code[i] = code[i] + k;
           cout << code[i];
    }

 




return 0;
}