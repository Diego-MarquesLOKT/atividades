#include <bits/stdc++.h>
using namespace std;
#define TAM 500

void funcao(char strB[], char strA[], int k){
    int indice = 0;
    int tam = strlen(strB);
   if(k > tam){
       k = tam;
   }
    for (int i = k - 1; i >= 0 ; i--){
        strA[indice] = strB[i];
        indice++;
        
    }
    strA[TAM] = '\0';
    cout << strA;
}

int main(){
    char strA[TAM], strB[TAM];
    int k;
    cin.getline(strB,TAM);

    cin>> k;
    funcao(strB,strA,k);


return 0;
}