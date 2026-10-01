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
   
    string s; cin >> s;
    int t = 0;

    for (int i=0; i<s.size(); i++)
        if (s[i]=='1') t++;

    cout << s;
    cout << (t % 2 == 0 ? '0' : '1') << endl;
    return 0;
}
