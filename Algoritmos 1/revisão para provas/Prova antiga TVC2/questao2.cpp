#include <bits/stdc++.h>
using namespace std;

void sal(int salmin, int salar){

int sal60porcento = (salmin/2)+salar;
while(salar >= 0){
    if(salar < salmin){
        cout << "Pagamento: 100%" << endl;
    }else
    if(salar < sal60porcento){
    cout <<"Pagamento: 60%" << endl;
    }else{
      cout <<  "Pagamento: 0%" << endl;
    }
cin >> salar;
}

}

int main(){
    int salmin, salario;
    cin >> salmin >> salario;
sal(salmin,salario);
return 0;
}