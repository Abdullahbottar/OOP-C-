//#include <iostream>
//using namespace std;
//class date
//{
//	int day;
//	int month;
//	int year;
//public:
//	date()
//	{
//		cout << "default constructor called" << endl;
//		day = 1;
//		month = 1;
//		year = 1926;
//	}
//	void print()
//	{
//		cout << day << "/" << month << "/" << year << endl;
//	}
//	void input()
//	{
//		cout << "enter the day:";
//		cin >> day;
//		cout << "enter the month:";
//		cin >> month;
//		cout << "enter the year:";
//		cin >> year;
//	}
//	date(int d, int m, int y)
//	{
//		day = d;
//		month = m;
//		year = y;
//		cout << day << "/" << month << "/" << year << endl;
//	}
//	void setday(int d)
//	{
//		day = d;
//	}
//	void setmonth(int m)
//	{
//		month = m;
//	}
//	void setyear(int y)
//	{
//		year = y;
//	}
//	int getday()
//	{
//		return day;
//	}
//	int getmonth()
//	{
//		return month;
//	}
//	int getyear()
//	{
//		return year;
//	}
//};
//int main()
//{
//	date date1;
//	date1.print();
//	date1.input();
//	date1.print();
//	date objxmass(13, 9, 2023);
//	objxmass.setday(25);
//	objxmass.setmonth(12);
//	objxmass.setyear(2020);
//	objxmass.print();
//	cout << objxmass.getday() << "/" << objxmass.getmonth() << "/" << objxmass.getyear() << endl;
//	return 0;
//}