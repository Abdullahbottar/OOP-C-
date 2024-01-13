//#include <iostream>
//using namespace std;
//class strig
//{
//	int lenght;
//	char *str;
//public:
//	strig(int count)
//	{
//		lenght = count;
//		str=new char[lenght];
//		for (int i = 0; i < count; i++)
//		{
//			str[i] = NULL;
//		}
//	}
//	strig(strig& obj)
//	{
//		lenght = obj.lenght;
//		str = new char[lenght];
//		for (int i = 0; i < lenght; i++)
//		{
//			str[i] = obj.str[i];
//		}
//	}
//	void strinput(int size, char a)
//	{
//		str[size] = a;
//	}
//	char* getstr()
//	{
//		return str;
//	}
//	int getlenght()
//	{
//		return lenght;
//	}
//	void print()
//	{
//		for (int i = 0; i < lenght; i++)
//		{
//			cout << str[i];
//		}
//		cout << endl;
//	}
//	void operator++()
//	{
//		++str[lenght - 1];
//	}
//	void operator--()
//	{
//		--str[lenght - 1];
//	}
//	strig operator+(strig& obj)
//	{
//
//		int x = lenght;
//		lenght += obj.lenght;
//		strig obj1(lenght);
//		for (int i = 0; i < x; i++)
//		{
//			obj1.str[i] = str[i];
//		}
//		int k = 0;
//		for (int i = x; i < lenght; i++)
//		{
//			obj1.str[i] = obj.str[k];
//			k++;
//		} 
//		str = new char[lenght];
//		for (int i = 0; i < lenght; i++)
//		{
//			str[i] = obj1.str[i];
//		}
//		return obj1;
//	}
//	void operator==(strig& obj)
//	{
//		int x = 0;
//		char a;
//		if (lenght == obj.lenght)
//		{
//			strig obj2(lenght);
//			strig obj3(obj.lenght);
//			obj2.str = getstr();
//			obj3.str = obj.getstr();
//			cout << "equal lenght" << endl;
//			for (int i = 0; i < lenght; i++)
//			{
//				char a = str[i];
//				x = (int)a;
//				if (x > 96)
//				{
//					x = x - 32;
//				}
//				a = (char)x;
//				str[i] = x;
//				a = obj.str[i];
//				x = (int)a;
//				if (x > 96)
//				{
//					x = x - 32;
//				}
//				a = (char)x;
//				obj.str[i] = x;
//				if (str[i] == obj.str[i])
//				{
//					if (i == (lenght - 1))
//					{
//						cout << "equal\n";
//						break;
//					}
//					continue;
//				}
//				else
//				{
//					cout << "not equal\n";
//					break;
//				}
//			}
//			str = obj2.str;
//			obj.str = obj3.str;
//		}
//		else
//		{
//			cout << "not equal\n";
//		}
//
//	}
//};
//int main()
//{
//	char y;
//	int size;
//	cout << "enter the size of string:";
//	cin >> size;
//	cout << "enter the elements of str:\n";
//	strig s(size);
//	for (int i = 0; i < size; i++)
//	{
//		cin >> y;
//		s.strinput(i, y);
//	}
//	s.print();
//	cout << "enter the size 2nd of string:";
//	cin >> size;
//	cout << "enter the elements of 2nd str:\n";
//	strig q(size);
//	for (int i = 0; i < size; i++)
//	{
//		cin >> y;
//		q.strinput(i, y);
//	}
//	q.print();
//	strig r(q);
//	r.print();
//	r == s;
//	++r;
//	r.print();
//	--q;
//	q.print();
//	r = r + q;
//	r.print();
//	//system("pause");
//	return 0;
//}