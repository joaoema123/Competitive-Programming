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
    int n; 

    while (cin >> n)
    {
        for (int i=0; i<n; i++)
        {
            string letra; getline(cin >> ws, letra);
            stringstream simbolos(letra);
            string simbolo;
            int total = 0;

            while (simbolos >> simbolo) total++;

            if (simbolo == ".") cout << (char)(97 + (3*(total-1))) << endl;
            else if (simbolo == "..") cout << (char)(98 + (3*(total-1))) << endl;
            else cout << (char)(99 + (3*(total-1))) << endl;

        }
    }
    return 0;
}
