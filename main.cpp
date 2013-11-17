#include "DayToYear.h"
#include <iostream>
using namespace std;

int main()
{
    DayToYear foo = DayToYear(1);
    foo.print();
    for(int i=0;i<32;i++)
    {
        ++foo;
        foo.print();
    }
    return 0;
}
