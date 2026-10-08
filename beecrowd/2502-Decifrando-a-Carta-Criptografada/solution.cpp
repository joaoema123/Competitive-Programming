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
    
    int c, n;
    while (cin >> c >> n)
    {
        string a, b;
        getline(cin >> ws, a);
        getline(cin >> ws, b);

        map<char, char> cifra;
        for (int i=0; i<c; i++)
        {

            if ((a[i]>=65 && a[i]<=90) && (b[i]>=65 && b[i]<=90))
            {
                cifra[a[i]] = b[i];
                cifra[b[i]] = a[i];
                cifra[a[i]+32] = b[i]+32;
                cifra[b[i]+32] = a[i]+32;
            }
            else if((a[i]>=97 && a[i]<=122) && (b[i]>=97 && b[i]<=122))
            {
                cifra[a[i]] = b[i];
                cifra[b[i]] = a[i];
                cifra[a[i]-32] = b[i]-32;
                cifra[b[i]-32] = a[i]-32;
            }
            else if((a[i] >= 65 && a[i] <= 90) && (b[i]>= 48 && b[i] <=57))
            {
                cifra[b[i]]=a[i]+32;
                cifra[a[i]+32] = b[i];
            }
            else
            {
                cifra[a[i]] = b[i];
                cifra[b[i]] = a[i];
            }
        }

        for(int i=0; i<n; i++)
        {
            string linha;
            getline(cin >> ws, linha);
            for(int j=0; j < (int)linha.size(); j++)
            {
                if (cifra.find(linha[j]) != cifra.end())
                    cout << cifra[linha[j]];
                else cout << linha[j];
            }
            cout << endl;
        }

        cout << endl;
    }
    return 0;
}
