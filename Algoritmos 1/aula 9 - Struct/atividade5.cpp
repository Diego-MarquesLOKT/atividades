#include <bits/stdc++.h>
using namespace std;

struct Ponto{
    float x;
    float y;
};

float Pontos(Ponto p1, Ponto p2){
    float dist = sqrt(pow((p1.x-p2.x),2) + pow((p1.y-p2.y),2));
    return dist;
}



int main(){
         Ponto p1,p2;     
    cin >> p1.x;
    cin >> p2.x;
    cin >> p1.y;
    cin >> p2.y;
    float funcao = Pontos(p1,p2);
    cout << "Distância: " << funcao;
    return 0;
}