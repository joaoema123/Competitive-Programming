#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define dbg(x) cout << #x << " = " << x << endl
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main()
{ _

    string n1,  n2;
    ll caso = 1;
    while (cin >> n1 >> n2)
    {
        vector<ll> n1v;
        vector<ll> n2v;

        for (auto c : n1) n1v.push_back(c - '0');
        for (auto c : n2) n2v.push_back(c - '0');

        long unsigned int igual = 0;
        int total = 0;
        int j = 0;
        int ini;
        for (long unsigned int i=0; i<n2v.size(); i++)
        {
            if (n2v[i]==n1v[j])
            {
                j++;
                igual++;
            }
            else 
            {
                j = 0;
                igual = 0;
                if (n2v[i]==n1v[j])
                {
                    j++;
                    igual++;
                }
            }

            if (igual == n1v.size())
            {
                ini = i-n1v.size()+1;
                j = 0;
                igual = 0;
                total++;
            }
        }
        cout << "Caso #" << caso << ":\n";
        if (total != 0)
        {
            cout << "Qtd.Subsequencias: " << total << endl;
            cout << "Pos: " << ini+1 << endl;
        }
        else
            cout << "Nao existe subsequencia\n";
        cout << endl;
        caso++;
    }
    return 0;
}
