//#include <iostream>
//using namespace std;
//void in(int* ptr, int size)//takes input
//{
//	cout << "enter the elements in array:" << endl;
//	for (int i = 0; i < size; i++)
//	{
//		cout << "element at " << i << " index:";
//		cin >> *(ptr + i);
//	}
//	cout << endl;
//	cout << "the array is:" << endl;
//	for (int i = 0; i < size; i++)
//	{
//		cout << *(ptr + i) << " ";
//	}
//	cout << endl;
//}
//void cop(int* ptr2, int* ptr, int s, int size,int& k)
//{
//	for (int i = 0; i < s; i++)
//	{
//		*(ptr2 + k) = *(ptr + i);
//		k++;
//	}
//}
//void merge(int* ptr, int* ptr1, int s, int s1)
//{
//	int size = s + s1;
//	int* ptr2 = new int[size];
//	int j = 0;
//	cop(ptr2, ptr, s, size, j);
//	cop(ptr2, ptr1, s1, size, j);
//	int temp = 0;
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = (i + 1); j < size; j++)
//		{
//			if (*(ptr2 + i) >= *(ptr2 + j))
//			{
//				temp = *(ptr2 + i);
//				*(ptr2 + i) = *(ptr2 + j);
//				*(ptr2 + j) = temp;
//			}
//		}
//	}
//	cout << "merged array is:" << endl;
//	for (int i = 0; i < size; i++)
//	{
//		cout << *(ptr2 + i) << " ";
//	}
//	cout << endl;
//	delete[]ptr2;
//}
//int main()
//{
//	int s = 0;
//	int s1 = 0;
//	cout << "enter the size of array1:";
//	cin >> s;
//	cout << "enter the size of array2:";
//	cin >> s1;
//	int* ptr = new int[s];
//	int* ptr1 = new int[s1];
//	in(ptr, s);
//	in(ptr1, s1);
//	merge(ptr, ptr1, s, s1);
//	delete[]ptr;
//	delete[]ptr1;
//	return 0;
//}