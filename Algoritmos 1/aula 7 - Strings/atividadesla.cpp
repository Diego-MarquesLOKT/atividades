#include <bits/stdc++.h>
using namespace std;
#define TAM 500

int contador(char strA[], int caracter){
    int tam = strlen(strA);
    int cont = 0;
    for(int i = 0; i < tam; i++){
        if(strA[i] == caracter){
            cont++;
        }

    }
    return cont;

}

int main(){
    char strA[TAM];
    cin.getline(strA,TAM);
    char caracter;
    cin >> caracter;
int func = contador(strA,caracter);
cout << func;

}