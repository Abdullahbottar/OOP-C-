//#include <iostream>
//#include <string>
//using namespace std;
//class employee
//{
//	string fname;
//	string lname;
//	int msalary;
//public:
//	employee()
//	{
//	fname = { NULL };
//	lname = { NULL };
//	msalary = -1;
//	}
//	employee(string n, string s, int& l)
//	{
//		fname = n;
//		lname = s;
//		if (l < 0)
//		{
//			l = 0;
//		}
//		msalary = l;
//	}
//	void fun()
//	{
//		cout << fname << " " << lname << "\n" << "salaray:" << msalary << "$" << endl;
//	}
//	void inc(int& inc)
//	{
//		if (inc != 0 && inc > 0)
//		{
//			msalary += (msalary * inc) / 100;
//		}
//		cout << "NEW SALARAY:" << msalary << "$" <<endl;
//	}
//};
//int main()
//{
//	string first;
//	string last;
//	int sal=0;
//	int incre=0;
//	cout << "enter the first name of employee 1:";
//	getline(cin, first);
//	cout << "enter the last name of employee 1:";
//	getline(cin, last);
//	cout << "enter the salary of employee 1:";
//	cin >> sal;
//	employee obj(first, last, sal);
//	first = { NULL };
//	last = { NULL };
//	sal = 0;
//	cout << "enter the first name of employee 2:";
//	cin >> first;
//	cout << "enter the last name of employee 2:";
//	cin >> last;
//	cout << "enter the salary of employee 2:";
//	cin >> sal;
//	employee obj1(first, last, sal);
//	obj.fun();
//	obj1.fun();
//	cout << "enter the increment rate of employe 1:";
//	cin >> incre;
//	obj.inc(incre);
//	incre = 0;
//	cout << "enter the increment rate of employe 2:";
//	cin >> incre;
//	obj1.inc(incre);
//	return 0;
//}