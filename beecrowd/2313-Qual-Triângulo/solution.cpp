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
    
    int a, b, c;
    vector<int> v(3);
    cin >> a >> b >> c;
    v[0] = a;
    v[1] = b;
    v[2] = c;
    sort(v.begin(), v.end());

    if ((a >= b+c) || (b >= a+c) || (c >= a+b)) cout << "Invalido" << endl;
    else
    {
        cout << (a==b && b==c ? "Valido-Equilatero" 
                : (a==b && b!=c) || (a==c && c!=b) || (b==c && c != a) ? "Valido-Isoceles"
                : "Valido-Escaleno");
        cout << endl;
        cout << "Retangulo: ";
        cout << (v[2]*v[2] == v[0]*v[0]+v[1]*v[1] ? 'S' : 'N');
        cout << endl;
    }
    return 0;
}
