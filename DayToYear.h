#ifndef DAYTOYEAR_H
#define DAYTOYEAR_H
#include <string>
#include <iostream>
using namespace std;
 class DayToYear {
    private:
        int day, reducedDay;
        string dayAsMonth;
        static const int monthDays[12]; //= {31, 28, 31, ...};
        static const string monthNames[12]; //= {"January", "February",...};
        int monthIndex = 0;
    public:
        DayToYear(int foo)
        {
            reduce(foo);
        }
        void reduce(int foo)
        {
            reducedDay = foo;
            day = foo;
            while(reducedDay > monthDays[monthIndex])
            {
                reducedDay-=monthDays[monthIndex];
                monthIndex++;
            }
        }
		DayToYear& operator++();        // prefix form; advance by 1 day
		DayToYear& operator++(int);      // postfix form; advance by 1 day
        void print();
        int getDay()
        {
            return day;
        }
};
#endif
