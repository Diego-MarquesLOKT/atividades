#include <bits/stdc++.h>
using namespace std;

void diagonais(float m[100][100], int N){
    float pi = 0, sec = 0;
    for(int i = 0; i < n;i++){
pri += m[i][i];
sec += m[i][N-1-i];
    }
    cout << "Soma diag principal: " << pri << endl;
    cout << "Soma diag secundária: " << sec << endl;

}

int main(){
    float mat[100][100];
    int n;

    cin >> n;
    for(int i =0; i < n;i++){
        for(int j =0; j < n;j++){
            cin >> mat[i][j];
        }
    }
    diagonais(mat,n);

return 0;
}