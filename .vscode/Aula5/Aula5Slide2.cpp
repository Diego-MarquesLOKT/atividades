#include <bits/stdc++.h>
 using namespace std;
 
 
 
 /*int main()
 {
 int num, soma;
 soma = 0; // inicializa acumulador
 cout << "Digite um numero inteiro: ";
  cin >> num;
 while( num != 0 )
 {
 soma = soma + num; //atualiza acumulador
 cout << "Soma parcial: " << soma;
 cout << "\nDigite um numero inteiro: ";
 cin >> num;
 }
 cout << "Soma total: " << soma;
 return 0;
 }*/

 void func(float produto, float valor){
    
    float total;
    while (produto > 0){
        
        cout << "Para finalizar, digite 0" << endl;
       
       
        cin >> produto;
        cin >> valor;
        total = total + (produto*valor);
        cout << "Subtotal: " << total << endl;
    }
    
    cout << "O total a ser pago é: " << total << endl;
 }

 int main(){
float produto,valor;
cin >> produto >> valor;
func(produto,valor);
 }