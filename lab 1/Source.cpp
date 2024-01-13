#include <iostream>
using namespace std;
class math
{
	int a;
	int c;
	int* p = &c;
public:
	math()
	{
		a = 0;
		c = 0;
	}
	math(int b, int d)
	{
		a = b;
		c = d;
	}
	math(math&obj2)
	{
		a = obj2.a;
		c = obj2.c;
		p = obj2.p;
		*p = 10;
		cout << *obj2.p << endl;
	}
	void fun();
	void print()
	{
		cout << a << "\n" << c << "\n" << *p << endl;
	}
};
void math::fun()
{
	(*p)++;
}
int main()
{
	math obj(2, 4);
	obj.fun();
	obj.print();
	math obj1(6, 8);
	obj1.fun();
	obj1.print();
	math obj2(obj1);
	obj2.print();
	obj1.print();
	
	return 0;
}