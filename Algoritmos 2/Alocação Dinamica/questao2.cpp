#include <bits/stdc++.h>
using namespace std;

float prodEscalar(int n, float x[], float y[]){
    float resultado = 0;
    for (int i = 0; i < n; i++){
        resultado += x[i]*y[i];
    }
    return resultado;
}


int main(){
    int *n= new int;
    cin >> *n;
    float* x= new float[*n]; 
    float *y= new float[*n];
    cout << "Digite os valores de X: " << endl;
    for (int i = 0; i < *n ; i++){
        cin >> (x[i]);
    }
    cout << "Digite os valores de Y: " << endl;
    for (int i = 0; i < *n ; i++){
        cin >> (y[i]);
    }
    

    cout << "O produto escalar é: " << prodEscalar(*n,x,y);
    delete [] x;
    delete [] y;
    delete n;
    return 0;
}