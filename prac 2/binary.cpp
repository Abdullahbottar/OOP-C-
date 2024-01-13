//#include <iostream>
//using namespace std;
//class fraction
//{
//	mutable int num;
//	mutable int denom;
//public:
//	fraction(int num = 0, int denom = 1)
//	{
//		this->num = num;
//		this->denom = denom;
//	}
//	void simplify()
//	{
//		int temp = 0;
//		if (num > denom)
//		{
//			temp = denom;
//		}
//		else if (denom > num)
//		{
//			temp = num;
//		}
//		else
//		{
//			num = 1;
//			denom = 1;
//		}
//		for (int i = temp; i <= 2; i--)
//		{
//			if (i % num == 0 && i % denom == 0)
//			{
//				num = num / i;
//				denom = denom / i;
//			}
//		}
//
//	}
//	fraction operator +(const fraction& other)const
//	{
//		fraction a;
//		a.denom = other.denom * denom;
//		a.num = (num * other.denom) + (other.num* denom);
//		a.simplify();
//		return a;
//	}
//	fraction operator *(const fraction& other)const
//	{
//		fraction b;
//		b.num = (num * other.num);
//		b.denom = denom * other.denom;
//		b.simplify();
//		return b;
//	}
//	fraction operator -(const fraction& other)const
//	{
//		fraction c;
//		c.denom = other.denom * denom;
//		c.num = (num * other.denom) -(other.num * denom);
//		c.simplify();
//		return c;
//	}
//	fraction operator /(const fraction& other)const
//	{
//		fraction d;
//		d.num = (num * other.denom);
//		d.denom = denom * other.num;
//		d.simplify();
//		return d;
//	}
//	void print()
//	{
//		cout << "your fraction " << num << "/" << denom << endl;
//	}
//};
//int main()
//{
//	fraction f1(8, 5), f2(9, 7);
//	fraction f3 = f1 + f2;
//	cout << "Addition\n";
//	f3.print();
//	fraction f4 = f1 * f2;
//	cout << "multiplication\n";
//	f4.print();
//	fraction f5 = f1 - f2;
//	cout << "subtraction\n";
//	f5.print();
//	fraction f6 = f1 / f2;
//	cout << "division\n";
//	f6.print();
//
//
//
//	return 0;
//}