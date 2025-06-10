#include <bits/stdc++.h>
using namespace std;

int main(){
int fatorial= 1, cont = 1, ent;cin >> ent;
while (cont <= ent){
fatorial = cont * fatorial;

cont++;
}
cout << "Fatorial é : " << fatorial << endl;

    return 0;
}