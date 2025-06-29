#include <bits/stdc++.h>
using namespace std;

void calculador(int salario, int hextra){
int horas,calculo;
cin >> horas;
while(horas >= 0){
    calculo = (hextra * horas) + salario;
    cout << "Salário: " << calculo << endl;
    cin >> horas;
}


}

int main(){
int sal, extra;
cin >> sal >> extra;
calculador(sal,extra);

    return 0;
}