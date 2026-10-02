#include <bits/stdc++.h>
using namespace std;

// Aqui  ́e definida a macro "_", que ser ́a colocado mais na frente no c ́odigo
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

    int n; cin >> n;
    vector<int> v(n);

    for(int i=0; i<n; i++)
        cin >> v[i];

    if (v[0] > v[1])
    {
        // 4 0 5 2 8 1 9 3 7 5
        for (int i=1; i<v.size(); i+=2)
            if (v[i-1] <= v[i] || (i+1 < v.size() && v[i+1] <= v[i]))
            {
                cout << 0 << endl;
                return 0;
            }

    }   
    else if (v[0] < v[1])
    {
        // 1 2 1 7 3 8 4 5 0 9
        for (int i=1; i<v.size(); i+=2)
            if (v[i-1] >= v[i] || (i+1 < v.size() && v[i+1] >= v[i]))
            {
                cout << 0 << endl;
                return 0;
            }

    }
    else 
    {cout << 0 << endl; return 0;}
    cout << 1 << endl;
}
