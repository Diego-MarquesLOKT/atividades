#include <bits/stdc++.h>
using namespace std;

int main(){
int a=10, b=20, c=30, v[3], *pti, *pti1, *pti2;

        pti1 = &a;
        pti2 = &b;
        *pti1 = c;
        *pti2= c;

        pti = v;

        for(int i = 0; i < 3; i++){
            *(pti + i) = i + 1;
        }
        cout << endl <<"O conteúdo dos vetores são: ";
        for(int i = 0; i < 3; i++){
            cout << v[i] << " , ";
        }
        cout << endl <<"Os valores de a,b e c são: " << a << " , " << b << " , " << c ;

        a= *(pti) + 99;

        v[0] = a + b;
        v[1] = *pti2;
        v[2] = *(pti + 2);

        *pti2 += 1;
        *(pti + 1) -= 1;

        cout << endl <<"Os novos valores de a b e c são : " << a << " , " << b << " , " << c << endl;
        
 for(int i = 0; i < 3; i++){
            cout << v[i] << " , ";
        }
    return 0;
}
