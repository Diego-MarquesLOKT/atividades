#include <bits/stdc++.h>
using namespace std;

void mediaPositivos(float n1){
    float soma = 0;
    float contadorpositivos = 0;
    for(int cont = 0; cont < n1; cont++){
 
    float num; cin >> num;
    if(num > 0 ){
        soma += num;
        contadorpositivos++;
    }
}
if(contadorpositivos > 0){
    cout << "Media = " << soma/contadorpositivos;
}else{
    cout << "Nenhum numero positivo na sequencia" << endl;

}

}

int main(){
float n;
cin >> n;
mediaPositivos(n);

    return 0;
}