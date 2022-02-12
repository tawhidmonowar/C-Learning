#include <iostream>
#include <string.h>
using namespace std;

class student {
public:
    int id;

    void printValue()
    {
        cout << id;
    }

    student (int x)
    {
        id = x;
    }
};

int main()
{
    student tawhid(212115001);
    tawhid.printValue();

    return 0;
}
