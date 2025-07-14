#include <bits/stdc++.h>
using namespace std;

int main(){
    char string[50];
    cin.getline(string,50);
    int tam = strlen(string);
   string[0] = string[0] - 'a' + 'A'; 
    for(int i = 1; i < tam; i ++){
        if(string[i - 1] == ' '){
           string[i] = string[i] - 'a' + 'A'; 
        }
        
    }
    for(int i = 0; i < tam;i++){
        cout << string[i];
    }
    
return 0;
}