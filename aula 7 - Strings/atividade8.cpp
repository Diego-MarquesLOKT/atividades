#include <bits/stdc++.h>
using namespace std;

int vogal(char string[], int tam){
    int cont = 0;
    for(int i = 0; i < tam;i++){
        if(string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u'){
            cont++;
        }


    }
    return cont;

}

int main(){
    char string[50];
    cin.getline(string,50);
    int tam = strlen(string);
    cout << "QUantidade de vogais: " << vogal(string,tam) << endl;

return 0;
}