//#include <iostream>
//using namespace std;
//class hel
//{
//	int a;
//	int b;
//public:
//	hel()
//	{
//		a = 5;
//		b = 10;
//	}
//	//void operator++()
//	//{
//	//	++a;
//	//	++b;
//	//}
//	//void operator++(int)
//	//{
//	//	a++;
//	//	b++;
//	//}
//	hel* operator++(int)
//	{
//		hel* c = new hel;
//		c->a = a++;
//		c->b = b++;
//		return c;
//	}
//	hel operator++()
//	{
//		hel c;
//		c.a = ++a;
//		c.b = ++b;
//		return c;
//	}
//	hel(hel* a)
//	{
//		this->a = a->a;
//		this->b = a->b;
//	}
//	void display()
//	{
//		cout << a << endl;
//		cout << b << endl;
//	}
//};
//int main()
//{
//	hel c2;
//    hel c1(c2);
//	c1++;
//	c1.display();
//	c2.display();
//	hel* c3 = new hel;
//	c3->display();
//	c3=c1++;
//	c3->display();
//	return 0;
//}