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
    cin >> a >> b >> c;
    cout << "A = " << a << ", B = " << b <<", C = " << c << endl;
    cout << "A = " << setw(10) << right << a << ", B = " << setw(10) << right  << b <<", C = " << setw(10) << right  << c << endl;
    cout << "A = " << internal << setw(10) << setfill('0') << a << ", B = " << setw(10) << b <<", C = " << setw(10) << c << endl;
    cout << "A = " << setfill(' ') << setw(10) << left << a << ", B = " << setw(10) << left  << b <<", C = " << setw(10) << left  << c << endl;
    return 0;
}
