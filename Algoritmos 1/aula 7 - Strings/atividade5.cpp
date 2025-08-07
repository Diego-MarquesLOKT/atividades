#include <bits/stdc++.h>
using namespace std;

int main(){

    char string[40];
    cin.getline(string,40);
    int contador = 0;
    for(int i = 0; string[i] != '\0'; i++){
        if(string[i] == ' '){
         contador++;
        }
    }
    cout << "QUantidade : " << contador << endl;
    return 0;
}