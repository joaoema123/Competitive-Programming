#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p; cin >> p;
    while (p--)
    {
        string ori; cin >> ori;
        string str; str = ori;
        string copia = str;
        bool imprime = 1;

        for (int i = 0; i < (int)str.size(); i++) {if (str[i] < 97) {str[i] += 32; copia[i] += 32;}}

        for (int i = 0; i < (int)str.size(); i++)
            if(str[i]==str[i+1]) imprime = 0;

        sort(copia.begin(), copia.end());
        if (copia != str) imprime = 0;

        if (imprime) cout << ori << ": O\n";
        else cout << ori << ": N\n";
        
    }
}
