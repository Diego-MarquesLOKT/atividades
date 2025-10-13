#include <bits/stdc++.h>
using namespace std;

bool negativo(int vet[], int n){
if(n== 0){
    return false;
}

if (vet[0] < 0){
    return true;
}

return negativo(vet + 1, n - 1);

}

int main(){
    int vet[] = {-1, -2 ,-3 ,-4,9, 0 ,1 ,2 ,3 ,4 ,5, 6, 7, 8};
    int n = 14;
    cout << "Quantidade de negativos: " << negativo(vet,n) << endl;

    return 0
}