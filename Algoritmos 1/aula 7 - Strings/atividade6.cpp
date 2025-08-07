#include <bits/stdc++.h>
using namespace std;

int main(){
    char string[100];
    int cont = 0;
    cin.getline(string,100);
    cout << "Palavra:" << string << endl;
    int tam = strlen(string);
    for(int i=0; i < tam; i++){
        if(string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u'){
            cont++;
        }

    }
cout << "Quantidade de vogais: " << cont;

  return 0;  
}