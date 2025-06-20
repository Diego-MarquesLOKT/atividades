#include <bits/stdc++.h>
using namespace std;

int verificador(int n){
int nota = 0;
int contador = 0;
while(nota >= 0 && nota <= 100){
if(nota >= n){
    contador++;
}
cin >> nota;

}

return contador;
}

int main(){
int n;
cin >> n;
if(n > 0){
int resultado;
   resultado = verificador(n);

cout << "Alunos aprovados: " << resultado;
}
return 0;
}