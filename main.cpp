#include "DayToYear.h"
#include <iostream>
using namespace std;

int main()
{
    DayToYear foo = DayToYear(2);
    foo.print();
    for(int i=0;i<40;i++)
    {
        ++foo;
        foo.print();
    }
    return 0;
}
