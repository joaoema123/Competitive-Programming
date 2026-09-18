#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a; cin >> a;
        int b; cin >> b;
        int x; cin >> x;
        int y; cin >> y;

        vector<int> vet(4);
        vet[0] = a*(y);
        vet[1] = b*(a-(x+1));
        vet[2] = a*(b-(y+1));
        vet[3] = b*x;
        sort(vet.begin(), vet.end());
        cout << vet[3] << endl;
    }
}
