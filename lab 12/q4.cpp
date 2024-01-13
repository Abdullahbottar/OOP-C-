//#include <iostream>
//using namespace std;
//template <class T, int N>
//class Sequence
//{
//	T memblock[N];
//public:
//	void setmember(int x, T value)
//	{
//		if (x >= 0 && x < N)
//		{
//			memblock[x] = value;
//		}
//		else
//		{
//			cout << "Wrong input\n";
//		}
//	}
//	T getmember(int x)
//	{
//		if (x >= 0 && x < N)
//		{
//			return memblock[x];
//		}
//		else
//		{
//			cout << "Wrong input\n";
//			return T(); 
//		}
//	}
//};
//int main()
//{
//	Sequence < int, 5 > myints;
//	Sequence <double, 5 > myfloats;
//	myints.setmember(0, 100);
//	myfloats.setmember(3, 3.1416);
//	cout << myints.getmember(0) << "\n";
//	cout << myfloats.getmember(3) << "\n";
//	return 0;
//}