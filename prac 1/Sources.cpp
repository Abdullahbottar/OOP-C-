//#include <iostream>
//using namespace std;
//class set
//{
//	int l;
//	int* ptr= new int[l];
//public:
//	set()
//	{
//		*ptr = { NULL };
//		l = 0;
//	}
//	void add(int a)
//	{
//		ptr[l] = a;
//		l++;
//	}
//	void dup(int a)
//	{
//		int* ptr1 = new int[l];
//		for (int i = 0; i < l; i++)
//		{
//			ptr1[i] = ptr[i];
//		}
//		delete[]ptr;
//		for (int i = a; i < (l-1); i++)
//		{
//			ptr1[a] = ptr1[i + 1];
//		}
//		l--;
//		for (int i = 0; i < l; i++)
//		{
//			ptr[i] = ptr1[i];
//		}
//		delete[] ptr1;
//	}
//	void print()
//	{
//		int temp = 0;//ascending
//		for (int i = 0; i < l; i++)
//		{
//			for (int j = 0; j < l; j++)
//			{
//				if (ptr[i] > ptr[j])
//				{
//					temp = ptr[i];
//					ptr[i] = ptr[j];
//					ptr[j] = temp;
//			    }
//			}
//		}
//		for(int i = 0; i < l; i++)
//		{
//			for (int j = (i+1); j < l; j++)
//			{
//				if (ptr[i] == ptr[j])
//				{
//					dup(i);
//				}
//			}
//		}
//		cout << "{";
//		for (int i = 0; i < l; i++)
//		{
//			cout << ptr[i] << " ";
//	    }
//		cout << "}" << endl;
//	}
//
//};
//int main()
//{
//
//	set A, B;
//	A.add(7);
//	A.add(2);
//	A.add(5);
//	B.add(5);
//	B.add(3);
//	B.add(8);
//
//	cout << "Set A = ";
//	A.print();
//	cout << "Set B = ";
//	B.print();
//	//set C = A + B;
//	//std::cout << "A + B = ";
//	//C.print();
//	//set D = A - B;
//	//std::cout << "A - B = ";
//	//D.print();
//
//	return 0;
//}