#include <iostream>

using namespace std;

int main()
{
    cout << "   -ATIVIDADE 1-  " << endl;

    //A
   int x = 10;
   int *ptr;
//b
   cout << "Endereço de ptr: " << &ptr << endl;
//c
   cout << "Endereço de X: " << &x << endl;
//d
   cout << "Valor de X: " << x << endl;
//e
   ptr = &x;
//f
    cout << "Conteudo de ptr: " << ptr << endl;
   cout << "Contéudo apontado de ptr: " << *ptr << endl;
//g
    *ptr = x * 10;
    // também dá para fazer : *ptr = (*ptr)*10;
//h
     cout<< "Novo conteudo de ptr: " << ptr << endl;
     cout << "Novo conteudo apontado por ptr: " << *ptr << endl;
//i
    *ptr += 10;
//j
    cout<< "Novo conteudo de ptr: " << *ptr << endl << endl << endl << "--------------------//-----------------" << endl << endl << endl;


    // Exercicio 2:

    cout << "   -ATIVIDADE 2-   " << endl;

    int a=10, b=20, c=30, v[3], *pti, *pti1, *pti2;
    pti1 = &a;
    pti2 = &b;

     cout << "Conteudo atual de pti1: " << *pti1 << endl;
    cout << "Conteudo atual de pti2: " << *pti2 << endl;
    cout << "---------------//-----------" << endl;

    *pti1= c;
    *pti2= c;

    cout << "Conteudo atual de pti1: " << *pti1 << endl;
    cout << "Conteudo atual de pti2: " << *pti2 << endl;
    cout << "Resultado esperado: " << c << endl;
    cout << "---------------//-----------" << endl;

    *(v) = 1;
    *(v+1) = 2;
    *(v+2) = 3;

    cout << "Conteudo atual de V[1]: " << *(v+0) << endl;
    cout << "Conteudo atual de V[2]: " << *(v+1) << endl;
    cout << "Conteudo atual de V[3]: " << *(v+2) << endl;
    cout << "---------------//-----------" << endl;

    pti = &a;
    *pti = *(v + 0) + 99;

    cout << "Conteudo atual de a: " << a << endl;
    cout << "---------------//-----------" << endl;

    *(v+ 0) = (*pti1) + (*pti2);

    cout << "Conteudo atual de V[1]: " << *(v+0) << endl;
    cout << "---------------//-----------" << endl;

    *(v+1) = *pti2;

    cout << "Conteudo atual de V[2]: " << *(v+1) << endl;
    cout << "---------------//-----------" << endl;

    *(v+2) = *pti;

    cout << "Conteudo atual de V[3]: " << *(v+2) << endl;
    cout << "---------------//-----------" << endl;
    *pti2 -= 10;
    *(v+1) +=10;
    cout << "Conteudo atual de V[2]: " << *(v+1) << endl;
    cout <<"Conteudo de b: " << b << endl;
    cout << "----------//---------" << endl << endl << endl;
    cout << "    - ATIVIDADE 3 -     " << endl;

    int x1 = 23;

    float y = 9.7;

    int *pt1 = &x1;

    *pt1 = x1 +100;

    float *pt2 = &y;

    cout << "Soma de X e Y: " << (*pt1) + (*pt2) << endl;
    cout << "----------//---------" << endl;
    cout << "16 bytes depois de X: " << &x + 16 << endl;

    float *pt3 = &*pt2;


    return 0;
}
