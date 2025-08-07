//parecida com a ultima, porem o usuario vai definir quantos ele quer que apareça
#include <bits/stdc++.h>
using namespace std;

void penes(int n){
int cont,maior;
cin >> cont;
cin>> n;
maior = n;
for(int conta = 0; conta < cont - 1; conta++){
cin >> n;
if(maior < n){
    maior = n;
}
}
cout << maior << endl;


}

int main(){
int n;
cout << "Digite primeiramente a quantidade de valores reais : "; 
penes(n);
    return 0;
}