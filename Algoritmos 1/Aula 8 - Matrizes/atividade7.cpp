#include <bits/stdc++.h>
using namespace std;

float soma(float mat[100][100],int l, int c){
    float soma,maiorSoma, ind;
    for (int i = 0; i < l; i++){
        soma = 0;
        for(int j = 0; j < c; j++){
                soma +=mat[i][j];
        }
        cout << "Linha " << i << ": " << soma << endl;
        if(i ==0){
            maiorSoma= soma;
            ind =0;
        }
        else   
            if(soma>maiorSoma){
                maiorSoma = soma;
                ind = i;
            }
    }
    return maiorSoma;
}

int main(){
    int l; cin >> l;
    int c; cin >> c;
    float mat[l][c];
    float penes = soma(mat,l,c);
    cout << "A maior soma é: " << penes << endl;


return 0;
}