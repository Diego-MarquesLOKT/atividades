#include <bits/stdc++.h>
using namespace std;

void empadinha(double preco, int quantidade){
    while(quantidade >= 1){
        
        if(quantidade < 0){
            break;
        }
        if(quantidade > 6){
            cout << fixed << setprecision(2);
            cout << quantidade << " Empadas - R$ " << (preco*(0.95))*quantidade << " (Desconto de 5%) + Brinde!" << endl; 
        }else {cout << quantidade << " Empadas - R$ " << (preco*(0.95))*quantidade << " (Desconto de 5%)" << endl; }
        cin >> quantidade;
    }
}

int main(){
double preco = 0; int quantidade;
cin >> preco >> quantidade;
empadinha(preco,quantidade);

return 0;
}