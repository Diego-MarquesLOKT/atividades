#include <iostream>
using namespace std;
int maior, menor;
void recebe(int n1, int n2){

if (n1 < n2) {
    menor = n1;
    maior = n2;
} else {
    menor = n2;
    maior = n1;
}

for (int i = menor; i <= maior; ++i) {
    if (i % 11 == 5) {
        cout << i << endl;
    }
}
}
int main(){
int n1, n2;
    cin >> n1 >> n2;
recebe(n1,n2);


    return 0;
}