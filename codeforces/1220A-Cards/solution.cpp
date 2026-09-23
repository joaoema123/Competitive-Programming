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
    
    int n; cin >> n;
    string str; cin >> str;
    int nz, ne, nr, no, nn;
    nz = ne = nr = no = nn = 0;

    for (int i = 0; i < (int)str.size(); i++)
    {
        if (str[i] == 'z') nz++;
        else if (str[i] == 'e') ne++;
        else if(str[i] == 'r') nr++;
        else if (str[i] == 'o') no++;
        else nn++;
    }

    while ((no > 0) && (nn > 0) && (ne > 0))
    {
        cout << "1 ";
        no--;
        nn--;
        ne--;
    }
    while (nz > 0)
    {
        nz--;
        cout << "0 ";
    }
    cout << endl;

    return 0;
}
