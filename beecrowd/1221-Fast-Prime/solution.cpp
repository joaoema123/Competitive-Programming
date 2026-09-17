#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    
    // O(n*sqrt(num)) = 200*sqrt(2³¹) = 200*2**16 = 100*2**17 <= 10⁸
    for (int i = 0; i < n; i++)
    {
        int num; cin>>num;
        bool primo = true;
        for (int j=2; j*j<=num; j++)
            if (num % j == 0)
                primo = false;

        if (primo) cout << "Prime\n";
        else cout << "Not Prime\n";
    }

}
