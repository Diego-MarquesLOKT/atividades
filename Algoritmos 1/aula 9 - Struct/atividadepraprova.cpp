#include <bits/stdc++.h>
using namespace std;

struct dados{
    char nome[50];
    char rua[50];
    char n[10];
    char bairro[50];
    char cep[50];
    char cidade[100];
    char uf[2];
    char tel[10];
    char tel2[10];

};


int main(){
    dados mo[3];
    for(int i = 0; i < 3; i++){
        cin.getline(mo[i].nome);
        cin.getline(mo[i].rua);
       
        cin.getline(mo[i].n);
       
        cin.getline(mo[i].bairro);
        cin.getline(mo[i].cep);
        cin.getline(mo[i].cidade);
        cin.getline(mo[i].uf);
        cin.getline(mo[i].tel);
        cin.getline(mo[i].tel2);
    }
    for(int i = 0; i < 3;i++){
        cout << mo[i].nome;
    }

    return 0;
}