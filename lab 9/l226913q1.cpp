//#include <iostream>
//using namespace std;
//class complexnumber
//{
//protected:
//	float real;
//	float imaginary;
//public:
//	complexnumber()
//	{
//		real = 0;
//		imaginary = 0;
//	}
//	complexnumber(float real, float imaginary)
//	{
//		this->real = real;
//		this->imaginary = imaginary;
//	}
//	complexnumber(complexnumber& obj)
//	{
//		this->real = obj.real;
//		this->imaginary = obj.imaginary;
//	}
//	void print()
//	{
//		cout << real << "+" << imaginary << "i\n";
//		
//		/*else
//		{
//			cout << real << "-" << imaginary << "i\n";
//		}*/
//	}
//};
//class complexarthimatics:public complexnumber
//{
//public:
//	complexarthimatics()
//	{
//		real = 0;
//		imaginary = 0;
//	}
//	complexarthimatics(float real, float imaginary)
//	{
//		this->real = real;
//		this->imaginary = imaginary;
//	}
//	complexarthimatics add(complexarthimatics obj)
//	{
//		complexarthimatics obj1;
//		obj1.real = this->real + obj.real;
//		obj1.imaginary = this->imaginary + obj.imaginary;
//		return obj1;
//	}
//	complexarthimatics multiply(complexarthimatics obj)
//	{
//		complexarthimatics obj1;
//		obj1.real = (this->real) * (obj.real);
//		obj1.imaginary = (this->imaginary) * (obj.imaginary);
//		return obj1;
//	}
//	~complexarthimatics()
//	{
//		cout << "complexarthematics destructor\n";
//	}
//};
//class complexadvanced:public complexarthimatics
//{
//	double realpart;
//	double imaginarypart;
//public:
//	complexadvanced()
//	{
//		realpart=0;
//		imaginarypart=0;
//	}
//	complexadvanced(double realpart,double imaginarypart)
//	{
//		this->realpart = realpart;
//		this->imaginarypart = imaginarypart;
//	}
//	complexadvanced conjugate()
//	{
//		complexadvanced obj(realpart,imaginarypart);
//		obj.imaginarypart *= -1;
//		return obj;
//	}
//	double modulus()
//	{
//		double r = 0;
//		double i = 0;
//		r = realpart * realpart;
//		i = imaginarypart * imaginarypart;
//		r += i;
//		i = sqrt(r);
//		return i;
//	}
//	~complexadvanced()
//	{
//		cout << "complexadvanced destructor\n";
//	}
//};
//int main()
//{
//	complexnumber complexDefault;
//	complexnumber complexVals(3, 4);
//	complexnumber complexCopy(complexVals);
//
//	cout<<"Displaying complexDefault: ";
//	complexDefault.print();
//	cout<<"Displaying complexVals : ";
//	complexVals.print();
//	cout<<"Displaying complexCopy : ";
//	complexCopy.print();
//
//	complexarthimatics complexArith(2, 3);
//	complexarthimatics complexArith2(1, 2);
//	complexarthimatics addResult;
//	complexarthimatics multResult;
//	addResult = complexArith.add(complexArith2);
//	multResult = complexArith.multiply(complexArith2);
//	cout<<"Addition Result : ";
//	addResult.print();
//	cout<<"Multiplication Result : ";
//	multResult.print();
//
//	complexadvanced complexAdv(5, 12);
//	complexadvanced conjugateResult;
//	conjugateResult = complexAdv.conjugate();
//	double modulusResult = complexAdv.modulus();
//
//	cout<<"Conjugate: ";
//	conjugateResult.print();
//	cout<<"Modulus: " << modulusResult <<endl;
//
//	return 0;
//}