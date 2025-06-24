#include <bits/stdc++.h>
using namespace std;

void divisores(int n1){

    for(int i = 1; i <= n1; i++){
        if(n1%i == 0){
            cout << i << " ";

        }
        
    }

}

int main(){
        int n1;
        cin >> n1;
        divisores(n1);

    return 0;
}