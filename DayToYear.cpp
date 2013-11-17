#include <iostream>
#include "DayToYear.h"
using namespace std;

const int DayToYear::monthDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
const string DayToYear::monthNames[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

void DayToYear::print()
{
    cout << "Day " << day << " would be \t" << monthNames[monthIndex] << " " << reducedDay << endl;
}

DayToYear& DayToYear::operator++()
{
	day++;
	reduce(day);
	return *this;
}
//DayToYear& DayToYear::operator++(int foo)
//{
//	DayToYear blah = *this;
//	blah.day++;
//	blah.reduce(day);
//	return blah;
//}
