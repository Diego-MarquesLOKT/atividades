#include <bits/stdc++.h>
using namespace std;

void soletrando(char string[]){
    int tam = strlen(string);
    for(int i = 0; i < tam; i++){
        cout << string[i] << "-";
    }

}

int main(){
    char string[50];
    cin.getline(string);
    soletrando(string);


    return 0;
}