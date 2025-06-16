/*a) Faça uma função que receba um inteiro positivo x e
imprima todas as potências de 2 no intervalo entre 0 e x.
Use uma variável acumuladora para calcular a potência de
2.*/
#include <bits/stdc++.h>
using namespace std;

void potencia(int x){

    for(int i = 0; i <= x; i++){
        cout << "AOOOOOOOOO POTENCIA DE 2 NO INTERVALO DE 0 A " << x <<  " É : " << pow(2,i) << endl;
    }

}

int main(){
    int tal;
    cin >> tal;
        potencia(tal);
    return 0;
}
