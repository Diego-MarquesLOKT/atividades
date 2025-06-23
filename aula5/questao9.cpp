#include <bits/stdc++.h>
using namespace std;

int main(){
float divida = 10000;
float aplica = 1500;
int meses = 0;
for(meses=0; aplica <= divida; meses++){
    float juros = divida * 0.025;
    float rendimento = aplica * 0.04;
aplica += rendimento;
divida += juros;
}
cout << meses << endl;
return 0;
}