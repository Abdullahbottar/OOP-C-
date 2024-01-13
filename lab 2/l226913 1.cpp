//#include <iostream>
//#include <cmath>
//using namespace std;
//class vector
//{
//	double y;
//	double x;
//	double z;
//public:
//	vector(double ycord, double xcord, double zcord)
//	{
//		y = ycord;
//		x = xcord;
//		z = zcord;
//	}
//	double getx()
//	{
//		return x;
//	}
//	double gety()
//	{
//		return y;
//	}
//	double getz()
//	{
//		return z;
//	}
//	vector add()
//	{
//		x += getx();
//		y += gety();
//		z += getz();
//	}
//	double dotprod(vector obj2)
//	{
//		double sum = 0;
//		sum = (x * obj2.x) + (y * obj2.y) + (z * obj2.z);
//		return sum;
//	}
//	double mag()
//	{
//		double sum = (x * x) + (y * y) + (z * z);
//		sqrt(sum);
//		return sum;
//	}
//	vector proj(vector obj2, vector obj1)
//	{
//		double sum = (dotprod(obj2) * dotprod(obj1)) * dotprod(obj2);
//		double sum1 = obj2.mag() * obj1.mag();
//		sum = sum / sum1;
//		cout << "projection of two vectors: " << sum << endl;
//	}
//};
//int main()
//{
//	vector obj1(4, 5, 3);
//	vector obj2(4, 5, 6);
//	double j = obj1.dotprod(obj2);
//	cout << j << endl;
//	double f = obj1.mag();
//	cout << f << endl;
//	obj1.proj(obj1, obj2);
//	return 0;
//}