#include <bits/stdc++.h>
#define M 4

using namespace std;

int main()
{
    int ind = 0;
    int mat[M][M];
    for(int i = 0; i < M; i++){
        for(int j = 0; j < M;j++){
                cin >> mat[i][j];
        }

    }

    float maiorElem = mat[0][0];
        for(int i = 0; i < M; i++){
            for(int j = 0; j < M;j++){
                    if(mat[i][j] > maiorElem){
                        maiorElem= mat[i][j];
                    }
            }

        }
    cout << "Maior: " << maiorElem << endl;    

        maiorElem = mat[0][0];
        for(int i = 0; i < M; i++){
            for(int j = 0; j < M;j++){
                    if(mat[i][j] < maiorElem){
                        maiorElem= mat[i][j];
                    }
            }

        }
        cout << "Menor: " << maiorElem << endl;
        maiorElem = 0;
        for(int i = 0; i < M; i++){
            for(int j = 0; j < M;j++){
                    if(mat[i][j]%2 == 0){
                        maiorElem += mat[i][j];
                        ind++;
                    }
            }

        }
        maiorElem = maiorElem/ind;
        cout << setprecision(2) << fixed;
        cout << "Media Pares: " << maiorElem << endl;
        maiorElem = 0;
        for(int i = 0; i < M; i++){
            for(int j = 0; j < M;j++){
                    if(mat[i][j]%2 != 0){
                        maiorElem += mat[i][j];
                        ind++;
                    }
            }

        }
        maiorElem = (maiorElem*2)/ind;
        cout << setprecision(2) << fixed;
        cout << "Media Impares: " << maiorElem;
        maiorElem = 0;
    return 0;
}