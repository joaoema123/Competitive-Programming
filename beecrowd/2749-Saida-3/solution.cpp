#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << string(39, '-') << endl;
    for(int i=0; i<5; i++)
    {
        cout << '|';
        if (i == 0)
        {
            cout << "x = 35";
            cout << string(31, ' ');

        }
        else if (i == 2)
        {
            cout << string(15, ' ');
            cout << "x = 35";
            cout << string(16, ' ');
        }
        else if (i == 4)
        {
            cout << string(31, ' ');
            cout << "x = 35";
        }
        else cout << string(37, ' ');
        cout << '|';
        cout << endl;
    }
    cout << string(39, '-') << endl;
}
