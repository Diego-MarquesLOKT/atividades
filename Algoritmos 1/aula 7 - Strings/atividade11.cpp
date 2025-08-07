#include <bits/stdc++.h>
using namespace std;

void reversa(char string[]){
  int tam = strlen(string);
  for(int i = tam; i >= 0; i--){
    cout << string[i];

  }

}

int main(){
char nigg[50];
cin.getline(nigg,50);
reversa(nigg);

  return 0;
}