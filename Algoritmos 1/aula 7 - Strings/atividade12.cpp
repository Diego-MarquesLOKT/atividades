#include <bits/stdc++.h>
using namespace std;

void reverse(char pen[], char pan[]){
  int tam = strlen(pen);
  int maior = 0;
  for(int i = tam; i >=0; i--){
    pan[i] = pen[maior];
    maior++;
  }
  for(int i = 0; i <= tam;i++){
      cout << pan[i];
  }
}

int main(){
  char pen[50]; char nigg[50] = {0};
  cin.getline(pen,50);
  reverse(pen, nigg);

return 0;
}