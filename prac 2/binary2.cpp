//#include <iostream>
//#include<cmath>
//using namespace std;
//class vector
//{
//	int size;
//	int* elements;
//public:
//	vector(int size)
//	{
//		this->size = size;
//		elements = new int(size);
//	}
//	void settleelements(int x, int y)
//	{
//		elements[x] = y;
//	}
//	vector operator-()
//	{
//		vector temp(size);
//		for (int i = 0; i < size;i++)
//		{
//			temp.elements[i] =(elements[i]) * -(1);
//		}
//		return temp;
//	}
//	vector magnitude()
//	{
//		vector temp1(size);
//		for (int i = 0; i < size; i++)
//		{
//			if (elements[i] < 0)
//			{
//				temp1.elements[i] = -(elements[i]);
//			}
//			else
//			{
//				temp1.elements[i] = (elements[i]);
//			}
//		}
//		return temp1;
//	}
//	void print()
//	{
//		for (int i = 0; i < size; i++)
//		{
//			cout << elements[i] << " ";
//		}
//	}
//	~vector()
//	{
//		delete[]elements;
//	}
//};
//int main()
//{
//	int size = 0;
//	cout << "enter the size of vector:";
//	cin >> size;
//	vector s(size);
//	int x = 0;
//	for (int i = 0; i < size; i++)
//	{
//		cout << "enter element at index " << i << " :";
//		cin >> x;
//		s.settleelements(i, x);
//	}
//	vector v2(size);
//	v2 = -s;
//	cout << "negation of vector\n";
//	v2.print();
//
//	v2 = s.magnitude();
//	cout << "magnitude of vector\n";
//	v2.print();
//
//	return 0;
//}