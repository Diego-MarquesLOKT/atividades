#include <bits/stdc++.h>
using namespace std;

int main(){
int nota, flagzada = 0;
while(flagzada < nota){
cin >> nota;
if(nota >= 60 &&  nota <= 100){
    cout << "Aprovado!" << endl;
}else{
        if(nota < 0 && nota > 100){
    cout << "Reprovado!" << endl;
        }
}


}

    return 0;
}