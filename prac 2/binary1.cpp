//#include <iostream>
//using namespace std;
//class complex
//{
//	double real;
//	double imag;
//public:
//	complex(double real = 0, double imag = 0)
//	{
//		this->real = real;
//		this->imag = imag;
//	}
//	void operator++()
//	{
//		++imag;
//		++real;
//	}
//	void operator++(int)
//	{
//		imag++;
//		real++;
//	}
//    void operator--()
//	{
//		--imag;
//		--real;
//	}
//	void operator--(int)
//	{
//		real--;
//		imag--;
//	}
//	void print()
//	{
//		cout << "complex number =" << real << "+" << imag << "i\n";
//	}
//};
//int main()
//{
//	complex c(7, 8);
//	c.print();
//	c++;
//	c.print();
//	++c;
//	c.print();
//	--c;
//	c.print();
//	c--;
//	c.print();
//	return 0;
//}