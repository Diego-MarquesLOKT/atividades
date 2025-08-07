#include <bits/stdc++.h>
using namespace std;

int main(){
int inicio, fim;
inicio = 1000;
fim = 1999;
while(inicio <= fim){
if(inicio%11 == 5){
    cout << " " << inicio;
}

inicio++;
}


return 0;
}