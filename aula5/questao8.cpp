/*a) Faça uma função que receba um número inteiro e
positivo e verifique se este é ou não um número primo. A
função deve retornar true se o número for primo e false,
caso não seja.*/

#include <bits/stdc++.h>
using namespace std;

bool eprimo(int num){
 int cont,tal;
 tal = num;
 for(cont = 2; cont < num ; cont++){    
    if(num%cont == 0){
    return false;
        }
  

    }
return true;
}
int main(){
        int n;
        cin >> n;
        cout << eprimo(n) << endl;
        
    return 0;
}