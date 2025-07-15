#include <bits/stdc++.h>
using namespace std;
#define TAM 500
int espaco(char string[]){
    int cont = 0;
    int i = 0;
    while(string[i] != '\0'){
        if(string[i] == ' '){
            cont++;
        }
        i++;
    }

    return cont;
}

int main(){
    char string[TAM];
    cin.getline(string,TAM);
    int func = espaco(string);
    cout << "Espaços: " << func;

    return 0;
}