#include <bits/stdc++.h>
using namespace std;
#define inteiro 10

void jogo(int J1[], int J2[], int R[]){
    
    for(int i = 0; i < inteiro; i++){
        if((J1[i] + J2[i])%2 == 0){
            R[0]++;
        }   else{
            R[1]++;
        }
        

    }
    cout << "Jogador 1: " << R[0] << endl;
    cout << "Jogador 2: " << R[1];

}

int main(){
    int j1[inteiro], j2[inteiro], r[2]= {0};
    for(int i = 0; i < inteiro; i++){
        cin >> j1[i];
    }
    for(int i = 0; i < inteiro; i++){
         cin >> j2[i];
    }
    jogo(j1,j2,r);
   

    return 0;
}