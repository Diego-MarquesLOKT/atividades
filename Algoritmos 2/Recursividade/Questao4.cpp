#include <bits/stdc++.h>

using namespace std;
bool auxPrimo(int n, int i){
if(n == i){
    return true;

}
if(n%i == 0){
    return false;
}

return auxPrimo(n, i + 1);
}

bool ehPrimo(int n){
 return auxPrimo(n,2);
}

int main()
{
    int n;
    cin >> n;
   if(ehPrimo(n) == true){
    cout << "É Primo!";

   }else{
   cout << "Não é primo!";
   }
    return 0;
}
