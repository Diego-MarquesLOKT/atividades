#include <bits/stdc++.h>
using namespace std;

/*int main(){
int num, quad;
cout << "Informe o numero que voce quer o quadrado (Digite 0 se quiser cancelar)" << endl;
cin>> num;
while (num != 0){
 quad = num * num;
 cout << quad << endl;
cout  << "Para efetuar outra operação, informe outro número: ";
cin >> num;

}

    return 0;
}*/

//atividade 6

/*void leitor(int nota, int quantid){
int cont = 0;
while (cont < quantid){
    if(nota >= 60 && nota <= 100){
        cout << "APROVADO" << endl;
    }if(nota <0 && nota > 100){
        cout <<  "Obrigado por utilizar do meu código" << endl;
      }
    if(nota < 60 && nota >= 0){
        cout << "REPROVADO" << endl;
    }
    
    if(nota <0 && nota > 100){
      cout <<  "Você digitou um valor inválido, portanto, o programa será encerrado\nObrigado por utilizar do meu código" << endl;
      break;
    }
   
   cin >> nota;
   cont++;
   
}

}

int main(){
int notas, qntd;
cout<< "Por favor, informe de quantos alunos você quer saber: "; cin >> qntd;
cout << "Descubra se você está aprovado ou não, digite sua nota: "; cin >> notas;
leitor(notas,qntd);

return 0;
}*/

//atividade 7;

void tabuada(int n){
int cont = 0;
    while (cont <= 10){
     cout << n <<" * " <<  cont << " = " << n * cont << endl;;
     cont++;
    }

}

int main(){
int num, cont;
cout << "Digite um número para ser impresso na tabuada: "; cin >> num;
while(num >= 1){
   if(num > 9){
    return 0;
   }
    tabuada(num);
    cout << "Digite outro valor para calcular: " ; cin >> num;
}if(num < 1){
    cout << "Valor inválido, desligando o programa...";
    return 0;
}

tabuada(num);



}