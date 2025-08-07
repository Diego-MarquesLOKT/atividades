#include <bits/stdc++.h>
using namespace std;
#define TAM 100

void codigo(char strA[],int tam){
    char aux = strA[0];

    for(int i = 0; i < tam;i++){

        if(i%2 == 0){
            aux = strA[i];
            strA[i] = strA[i+1];
            strA[i+1] = aux;
            
        }
        
        
        cout << strA[i];
    }
    cout << endl;
}

int main(){
    char strA[TAM];

    int tam = strlen(strA);

    cin.getline(strA,TAM);

    codigo(strA,tam);


return 0;
}