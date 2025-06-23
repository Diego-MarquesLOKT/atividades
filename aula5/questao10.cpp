#include <bits/stdc++.h>
using namespace std;

int main(){
float s = 0;
int expo = 1;

for(int i = 50; i >= 2; i-=2){    
    s += (pow(2,expo))/i;
    expo++;
}
cout << s << endl;
    return 0;
}