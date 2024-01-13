//#include <iostream>
//using namespace std;
//class employee {
//protected:
//	int payrate;
//public:
//	friend void getpay(employee e);
//	friend class hello;
//	void setpayrate(int payrate)
//	{
//		if (payrate > 14)
//		{
//			this->payrate = payrate;
//		}
//		else
//		{
//			cout << "this payrate " << payrate << " not acceptable\n";
//		}
//	}
//	int getpayrate()
//	{
//		return payrate;
//	}
//};
//class faculty : employee
//{
//public:
//	void setpayrate(int payrate)
//	{
//		if (payrate > 25)
//		{
//			this->payrate = payrate;
//		}
//		else
//		{
//			cout << "this payrate " << payrate << " not acceptable\n";
//		}
//	}
//	int getpayrate()
//	{
//		return payrate;
//	}
//};
//void getpay(employee e)
//{
//	cout << "payrate " << e.payrate << endl;
//}
//class hello
//{
//public:
//	hello(employee a)
//	{
//		cout << "payrate " << a.payrate << endl;
//	}
//};
//int main()
//{
//	employee a;
//	a.setpayrate(15);
//	cout << "The new pay rate is " << a.getpayrate() << endl;
//	a.setpayrate(11);
//	cout << "The new pay rate is " << a.getpayrate() << endl;
//	a.setpayrate(20);
//	cout << "The new pay rate is " << a.getpayrate() << endl;
//	cout << "\n\n\n";
//	getpay(a);
//	cout << "\n\n\n";
//	cout << "creating faculty member payrate\n";
//	faculty b;
//	b.setpayrate(9);
//	cout << "The new pay rate is " << b.getpayrate() << endl;
//	b.setpayrate(20);
//	cout << "The new pay rate is " << b.getpayrate() << endl;
//	b.setpayrate(28);
//	cout << "The new pay rate is " << b.getpayrate() << endl;
//	cout << "\n\n\n";
//	hello c(a);
//	cout << "\n\n\n";
//	return 0;
//}
