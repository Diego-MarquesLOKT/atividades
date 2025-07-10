#include <bits/stdc++.h>
using namespace std;

int main()
{
char str[30];
cout << "Digite uma string: ";
cin.getline(str,30);
for(int i = 0; str[i] != '\0'; i++)
{
if(str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 'a' + 'A';
}
}

cout << str;
return 0;
}