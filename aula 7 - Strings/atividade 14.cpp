#include <bits/stdc++.h>
using namespace std;

void concatenacao(char str1[],char str2[], char str3[]){
  int tam1 = strlen(str1);
  int tam2 = strlen(str2);
  int cont = 0;
 int indice = 0;

  for(int i = 0; i < tam1; i++){
    str3[i] = str1[i];
    cont++;
  }
  for(int i = cont; i < tam1 + tam2; i ++){
    str3[i] = str2[indice];
    indice++;
  }
  str3[tam1 + tam2] = {0};
  cout << str3;

}

int main(){
  char str1[50], str2[50],str3[50];
  cin.getline(str1,50);
  cin.getline(str2,50);

  concatenacao(str1,str2,str3);

return 0;
}