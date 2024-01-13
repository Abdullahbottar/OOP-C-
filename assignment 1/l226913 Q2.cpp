//#include <iostream>
//using namespace std;
//void cut(int* ptr, int& size,int c)//cuts array size
//{
//	for (int i = c; i < (size-1); i++)
//	{
//		*(ptr + i) = *(ptr + i + 1);
//	}
//	size--;
//}
//void comp(int* ptr, int& size)//compresses array
//{
//	for (int i = 0; i < size; i++)
//	{
//		while (*(ptr + i) == 0)
//		{
//			if (i == size)
//			{
//				break;
//			}
//			cut(ptr, size, i);
//		}
//		for (int j = (i+1); j < size; j++)
//		{
//			if (*(ptr + i) == *(ptr + j))
//			{
//				*(ptr + j) = 0;
//			}
//		}
//	}
//	for (int i = 0; i < size; i++)
//	{
//		cout << *(ptr + i) << " ";
//	}
//}
//int main()
//{
//	int size = 0;
//	cout << "enter the size of array:";
//	cin >> size;
//	int* ptr = new int[size];
//	cout << "enter the elements in array:" << endl;
//	cout << "do not enter zero" << endl;
//	for (int i = 0; i < size; i++)
//	{
//		cout << "element at " << i << " index:";
//		cin >> *(ptr + i);
//		while (*(ptr + i) == 0)
//		{
//			cin >> *(ptr + i);
//		}
//	}
//	cout << endl;
//	cout << "the array is:" << endl;
//	for (int i = 0; i < size; i++)
//	{
//		cout << *(ptr + i) << " ";
//	}
//	cout << endl;
//	cout << "compressed array is:";
//	comp(ptr, size);
//	delete[]ptr;
//
//
//	return 0;
//}