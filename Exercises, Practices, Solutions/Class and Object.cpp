#include <iostream>
#include <string>
using namespace std;

class student
{
    public:
        int id;
        string name;
        void display()
        {
            cout << id << name;
        }
};

int main()
{
    student tawhid;
    cin >> tawhid.id;
    getline(cin,tawhid.name);

    tawhid.display();

    return 0;
}
