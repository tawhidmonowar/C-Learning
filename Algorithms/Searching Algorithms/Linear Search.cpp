#include <iostream>
using namespace std;

int main()
{
    int i,x[10],key;

    cout << "Enter the list: ";

    for(i=0;i<10;i++)
    {
        cin >> x[i];
    }

    cout << "Enter which number you want to find: ";

    cin >> key;

    for(i=0;i<10;i++)
    {
        if(x[i]==key)
        {
            cout << "index of " << key << " is: " << i << endl;
            break;
        }
    }

    return 0;
}
