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

Ponto MaisProximo(Ponto p1, Ponto p2){
 Ponto O;
 O.x = 0;
 O.y = 0;

    if(Pontos(O,p1) <= Pontos(O,p2)){
        return p1;
    }else 
    return p2;
    
}  
   


int main(){
         Ponto p1,p2,p3,p4;     
    cin >> p1.x;
    cin >> p1.y;
    cin >> p2.x;
    cin >> p2.y;
    Ponto p = MaisProximo(p1,p2);
    cout << "Digite os outros pontos" << endl;
    cin >> p3.x;
    cin >> p3.y;
    cin >> p4.x;
    cin >> p4.y;
    p = MaisProximo(p3,p);
    p = MaisProximo(p4,p);
    float funcao = Pontos(p1,p2);
    cout << "Distância: " << funcao << endl;
    cout << "Mais próximo: " << "(" << p.x << "," << p.y << ")";
    return 0;
}