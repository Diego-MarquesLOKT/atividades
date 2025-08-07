#include <bits/stdc++.h>
using namespace std;
#define TAM 100

int tristeza(int vet1[],int vet2[],int vet3[], int tam1, int tam2){
    int cont = 0;
    int indice = 0;
    for(int i = 0; i < vet1;i++){
        if(vet1[i]%2 == 0){
            vet3[indice] = vet[i];
            indice++;
        }
    }
    for(int i = 0; i < tam2;i++){
        if(vet2[i]%2 == 0){
            vet3[indice + 1] = vet2[i];
            indice++;
        }
    }
    vet3[tam1 + tam2] = '\0';
    for(int i = 0; vet3[i] != '\0';i++){
        cont++;
    }
    return cont;
}

int main(){
int vet1[TAM],vet2[TAM],vet3[],tam1,tam2;
cin.getline(vet1,TAM);
cin.getline(vet2,TAM);
tam1 = strlen(vet1);
tam2= strlen(vet2);

int func = tristeza(vet1,vet2,vet3,tam1,tam2);
cout << "Contagem: " << func;

return 0;
}