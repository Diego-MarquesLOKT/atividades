#include <bits/stdc++.h>
using namespace std;

float menor(float mat[5][4]){
    float menornum= m[0][0];
    for(int i = 0; i < 5;i++){

        for(int j = 0; j< 4; j++){
            cin >> mat[i][j];
            if(mat[i][j] < menornum){
                menornum = mat[i][j];
            }
        }
    }
    return menornum;
}

int main(){
 float mat[5][4];
 int recebefunc = menor(mat);

    cout << "O menor valor é: " << recebefunc << endl;


return 0;
}