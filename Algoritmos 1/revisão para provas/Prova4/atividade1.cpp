#include <bits/stdc++.h>
using namespace std;
#define tam 3

void colunaModificada(int M[tam][tam], int vet[tam], int k){
    int indice = 0;
    for(int i = 0; i < tam;i++){
        for(int j = 0; j < tam; j++){
               if(j == k){
                M[i][j] = vet[indice];
                indice++;
               } 
        }
    }
    for(int i = 0; i < tam;i++){
        for(int j = 0; j < tam; j++){
                cout << M[i][j] << " ";
        }
        cout << endl;
    }
    

}

int main(){
    int M[tam][tam];
    int vet[tam];
    for(int i = 0; i < tam;i++){
        cin >> vet[i];
    }
    int k; cin >> k;
    for(int i = 0; i < tam;i++){
        for(int j = 0; j < tam; j++){
             cin >> M[i][j];
        }
    }
    colunaModificada(M,vet,k);


return 0;
}