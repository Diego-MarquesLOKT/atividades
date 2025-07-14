#include <bits/stdc++.h>
using namespace std;

int funcao(char string[]){
 int tam = strlen(string);
 int cont = 0;
 for(int i = 0; i < tam; i++){
  if(string[i]== 'a'){
    string[i] = 'b';
    cont++;
  }
 } 

 return cont;
}

int main(){
  char string[50];
  cin.getline(string,50);
  int penes = funcao(string);
  cout << "Valor de caracteres modificados: " << penes;

}