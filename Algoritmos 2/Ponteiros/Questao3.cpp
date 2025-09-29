#include <bits/stdc++.h>
using namespace std;

int main(){
    int x = 23;
    float y = 9.7;
    int *pt = NULL;
    pt = &x;
    *pt += 1;

        float pt2 = NULL; pt2 = &y;

    cout << "A soma dos ponteiros são: " << *pt + *pt2 << endl;

    int end;
    end = &x + 4
    cout << "Endereço 16 bytes acima é: " << &end;

    float *pt3 = NULL;
    pt3 = pt2;
    
    cout << "O endereço primeiros : " << &pt3 << " , " << &pt3 +1 << endl;

    return 0;
}