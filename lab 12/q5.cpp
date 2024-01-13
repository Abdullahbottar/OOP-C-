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
//template <class T>
//class Pair
//{
//	T arr[2];
//public:
//	Pair () { }
//	Pair(T x, T y)
//	{
//		arr[0] = x;
//		arr[1] = y;
//	}
//	T getmax()
//	{
//		if (arr[0] >= arr[1])
//		{
//			return arr[0];
//		}
//		else
//		{
//			return arr[1];
//		}
//	}
//	T getmin()
//	{
//		if (arr[0] <= arr[1])
//		{
//			return arr[0];
//		}
//		else
//		{
//			return arr[1];
//		}
//	}
//	friend ostream& operator<<(ostream& os, const Pair<T>& p)
//	{
//		os << "(" << p.arr[0] << ", " << p.arr[1] << ")";
//		return os;
//	}
//};
//int main()
//{
//	const int x = 5;
//    Pair<double> y(2.23, 3.45);
//    Sequence<Pair<double>,x > myPairs;
//    myPairs.setmember(0, y);
//    cout<<myPairs.getmember(0)<<"\n";
//    return 0;
//}