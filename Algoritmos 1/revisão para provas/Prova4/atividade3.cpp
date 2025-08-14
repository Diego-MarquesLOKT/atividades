#include <bits/stdc++.h>
using namespace std;

float matrizpreenchida(float mat[3][4]){
    float menor = 0;
    float maior = -1;
    bool verificador = true;
    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            if(mat[i][j] > 0){
            if(verificador == true){
                menor = mat[i][j];
                maior = mat[i][j];
                verificador = false;
            } 
            else{
            if( menor > mat[i][j]){
                menor = mat[i][j];

            }
            if(maior < mat[i][j]){
                maior = mat[i][j];
            }}}
        }
    
    }
    return sqrt(menor + maior);
}

int main(){
    float mat[3][4];
    for(int i = 0; i < 3; i++){
    for (int j = 0; j < 4; j++){
      cin >> mat[i][j];   
    }
    }
    float funcao = matrizpreenchida(mat);
    cout << setprecision(2) << fixed;
    cout << funcao;
    return 0;
}