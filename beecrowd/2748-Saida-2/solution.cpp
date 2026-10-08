#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << string(39, '-') << endl;
    for(int i=0; i<5; i++)
    {
        cout << '|';
        if (i == 0)
        {
            cout << string(8, ' ');
            cout << "Roberto";
            cout << string(22,' ');
        }
        else if (i == 2)
        {
            cout << string(8, ' ');
            cout << "5786";
            cout << string(25, ' ');
        }
        else if (i == 4)
        {
            cout << string(8, ' ');
            cout << "UNIFEI";
            cout << string(23, ' ');
        }
        else cout << string(37, ' ');
        cout << '|';
        cout << endl;
    }
    cout << string(39, '-') << endl;
}
