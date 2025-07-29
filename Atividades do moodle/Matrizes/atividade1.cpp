#include <bits/stdc++.h>
#define TAM 3

using namespace std;

void cospefeijao(float mat[TAM][TAM],float mato[TAM][TAM]){
    
    cout << setprecision(1) << fixed;
    for(int i = 0; i < TAM;i++){
        for(int j =0; j< TAM;j++){
            mat[i][j] = mat[i][j] + mato[i][j];
        }
    }
    
    for(int i = 0; i < TAM;i++){
        for(int j =0; j< TAM;j++){
           cout << mat[i][j] << " ";
         
           }
           cout << endl;
        }
    }
    

int main(){
    cout << fixed << setprecision(1);
    float mat[TAM][TAM];float mato[TAM][TAM];
    for(int i = 0; i < TAM;i++){
        for(int j =0; j< TAM;j++){
           cin>> mat[i][j];
           
        }
    }
    
     for(int i = 0; i < TAM;i++){
        for(int j =0; j< TAM;j++){
           cin>> mato[i][j];
           
        }
    }
  cospefeijao(mat,mato);

   
return 0;
}