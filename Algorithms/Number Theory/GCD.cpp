#include <bits/stdc++.h>
using namespace std;

int GCD(int x, int y)
{
    if(y==0)
    {
        return x;
    }else
    {
        GCD(y,x%y);
    }
}

int main()
{
    int x,y;
    cin >> x >> y;
    cout << GCD(x,y);
    
    return 0;
}
