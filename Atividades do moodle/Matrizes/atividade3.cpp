#include <bits/stdc++.h>
using namespace std;
#define N 5

int main(){

float matriz[N][N]; 
for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
            cin >> matriz[i][j];
    }
}
float vetemp[N] = {0};

for (int i = 0; i < N; i++) {
    
    for (int j = 0; j < N; j++) {
        if (i + j == N - 1) {
            vetemp[i] = ceil(matriz[j][i]);
        }
    }
   if(vetemp[i] < 0){
        return 0;
    }

}
    for (int i = 0; i < N; i++) {
   
    for (int j = 0; j < N; j++) {
       if(i+j == N - 1){
        matriz[i][j] = vetemp[i];
       }
    }
   

}
for (int i = 0; i < N; i++) {
   
    for (int j = 0; j < N; j++) {
       cout << matriz[i][j] << " ";
    }
   cout << endl;

}

return 0;
}