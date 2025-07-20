#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;
    int vet[5];
    int guarda = 0;
    bool verif = false;
    for(int i = 0; i < 5; i++){
        cin >> vet[i];
        if(vet[i] == x){
            guarda = vet[0];
            verif = true;
        }
        
    }
    if(verif == true){
        cout << guarda;
    }
    if(verif == false){
        cout << "-1";
    }

return 0;
}