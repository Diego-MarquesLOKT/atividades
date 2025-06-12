#include <iostream>
 using namespace std;
 int main()
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
 }