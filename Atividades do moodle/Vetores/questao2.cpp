#include <bits/stdc++.h>
using namespace std;
#define alunos 4

int main(){
    cout << setprecision(1) << fixed;
    float media[alunos];
    float notas;
    float soma;
    
    for(int i = 1; i < alunos + 1; i++){
            soma = 0;
        for(int nota = 0; nota < 3; nota++){
            cin >> notas;
            soma += notas;
        }
            media[i] = soma/3;  
            cout << "Média Aluno 0" << i <<": " << media[i] << endl;
    }

    return 0;
}
