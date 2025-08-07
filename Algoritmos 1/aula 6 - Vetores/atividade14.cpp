#include <bits/stdc++.h>
using namespace std;
#define tamvetor 7

int somaPar(int vet[], int tam){
int soma =0;
    for(int i =0; i < tam; i++){
        if(vet[i]%2==0){
        soma+=vet[i];
        }
    }
return soma;
}

void checagemnegativo(int vet[], int tam){
    int contagem=0;
int vetornegativo[tam] = {0};
    for(int i = 0; i < tam; i++){
            if(vet[i] < 0){
                vetornegativo[contagem] = vet[i];
                contagem++;
            }
        
        }   
    for(int i = 0; i < tam;i++){
        if(vetornegativo[i] < 0){
            cout << vetornegativo[i]<< " ";
        }
        
    }    
    cout << endl;
}

void multi(int vet[],int tam){

        for(int i = 0; i < tam ; i++){
        vet[i] = vet[i] * 2;
    }

}

int main(){
 int vet[tamvetor]= {0};
int n;
for(int i = 0; i < tamvetor; i++){
    cin >> n;
    vet[i] = {n};
}
cout << somaPar(vet,tamvetor) << endl;
checagemnegativo(vet,tamvetor);
multi(vet,tamvetor);
for(int i =0; i < tamvetor; i++){
    cout << vet[i] << " ";
}
cout << endl;
    return 0;
}