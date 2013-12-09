#include "DayToYear.h"
#include <iostream>
using namespace std;

int main()
{
    DayToYear foo = DayToYear(25);
    foo.print();
    for(int i=0;i<10;i++)
    {
        foo++;
        foo.print();
    }
    cout << "\n\n";
    DayToYear bar = DayToYear(25);
    for(int i=0;i<10;i++)
    {
        ++bar;
        bar.print();
    }
    return 0;
}
