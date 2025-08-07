#include <bits/stdc++.h>
using namespace std;

void funcao(int n1, int n2 , int x){

    while(n1 <= n2){

        if(n1%x==0){
        cout <<"Os multiplos são: " << n1 << " ";
        }
    n1++;
}

}

int main(){
    int n1, n2, x;
    cin >> n1 >> n2 >> x;
    funcao(n1,n2,x);
    return 0;   
}