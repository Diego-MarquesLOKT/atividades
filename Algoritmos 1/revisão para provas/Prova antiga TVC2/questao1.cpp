//retornar os multiplos de 8
#include <bits/stdc++.h>
using namespace std;

void tal(int n1, int n2){
int soma = 0;
int numaior = 0;

for(int cont= n1; n1 <= n2; n1++){
if(n1%8 == 0){
    soma += n1;
    numaior = n1;
}

}
cout << "Soma dos números múltiplos de 8: " << soma << endl << numaior << endl;

}

int main(){
    int n1,n2;
    cin >> n1 >> n2;
    tal(n1,n2);
    
    return 0;
}