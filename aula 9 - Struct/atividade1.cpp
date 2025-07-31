#include <bits/stdc++.h>
using namespace std;
/*Defina uma estrutura para representar as informações de
um cartão de crédito. Você precisa apenas criar a
estrutura com os dados e tipos apropriados. Não é
necessário criar um programa para utilizá-la.*/
struct cartao{
    char nome[100];
    char numero[17];
    int cvv;
    int ano_val,mes_val;
}