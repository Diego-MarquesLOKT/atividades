#include <bits/stdc++.h>
using namespace std;

void verificador(int quantidade){
    int nota, falta, atividade;
for(int cont = 0; cont < quantidade; cont++){
    cin >> nota >> falta >> atividade;
if(nota >= 60 && falta <= 15){
    cout << "Aprovado" << endl;
    
}else{
    if(nota < 60 && falta <= 15 && atividade >=30 ){
        cout <<"O aluno tem direito de fazer a prova substitutiva" << endl;
       
    }else{ if((nota < 60 || falta > 15)){
        cout << "Reprovado" << endl;
         
                                                            }   
                }
    }
}

}
int main(){
int qntd;
cin >> qntd;
verificador(qntd);
return 0;
}