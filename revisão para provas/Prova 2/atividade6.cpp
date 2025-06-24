#include <bits/stdc++.h>
using namespace std;

void func(int n1, int n2)
{
    int nmaior;
    int nmenor;
    if (n1 <= n2)
    {
        nmenor = n1;
        nmaior = n2;
    }
    else
    {
        nmaior = n1;
        nmenor = n2;
    }

    while (nmenor <= nmaior)
    {
        if (nmenor % 2 != 0)
        {
            cout << nmenor << " ";
        }
        nmenor++;
    }
}

int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    func(n1, n2);
    return 0;
}