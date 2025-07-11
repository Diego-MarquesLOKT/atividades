#include <bits/stdc++.h>
using namespace std;


/*void contador(int vet[], int tama){
    int vetmenor = vet[0];
    int vetnovo[tama] = {0};
    int aux= 0, cont = 0;    

    while( cont < tama){
    for(int i = 0; i < tama;i++){
        if(vet[i] < vetmenor){
            aux = vet[i];
            
            if(aux < vetmenor){
                vetmenor = vet[i];
                vetnovo[cont] = vetmenor;
                cont++;
            }
            
        }
        
    }
    for(int i = 0; i< tama; i++){
    cout << vetnovo[i] << " , "; 
        }


    }
}

int main(){
    int tama; cin >> tama;
    int vet[tama];
    for(int i = 0; i < tama; i++){
        cin >> vet[i];
    }
    contador(vet,tama);
    return 0;
}*/

#include <iostream>
using namespace std;

void contador(int vet[], int tama) {
    // Bubble Sort
    for(int i = 0; i < tama - 1; i++) {
        for(int j = 0; j < tama - i - 1; j++) {
            if(vet[j] > vet[j + 1]) {
                // Troca os elementos
                int temp = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = temp;
            }
        }
    }

    // Imprime o vetor ordenado
    for(int i = 0; i < tama; i++) {
        cout << vet[i] << " ";
    }
    cout << endl;
}

int main() {
    int tama;
    cin >> tama;

    int vet[tama];
    for(int i = 0; i < tama; i++) {
        cin >> vet[i];
    }

    contador(vet, tama);

    return 0;
}
