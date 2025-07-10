#include <bits/stdc++.h>
using namespace std;

int func( char string[], int tam){

    int cont = 0;
    for(int i = 0; i < tam; i++){
        if(string[i] == ' '){
            cont++;
           }
       }
       

    return cont;
}

int main(){
    char string[50];
    cin.getline(string,50);
    int tam = strlen(string);
    cout <<"QUantidade : " <<  func(string,tam);

    return 0;
}