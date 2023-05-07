#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,x;
    cin >> x;

    for(i=2;i<sqrt(x);i++)
    {
        if(x%i==0)
        {
            cout << "Not Prime";
            return 0;
        }
    }

    cout << "Prime";

    return 0;
}
