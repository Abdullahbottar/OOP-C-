//#include <iostream>
//using namespace std;
//void in(int* ptr, int size)//takes input
//{
//	cout << "enter the elements in array:" << endl;
//	for (int i = 0; i < size; i++)
//	{
//		cout << "element at " << i << " index:";
//    	cin >> *(ptr + i);
//	}
//	cout << endl;
//	cout << "the array is:" << endl;
//	for (int i = 0; i < size; i++)
//	{
//		cout << *(ptr + i) << " ";
//	}
//	cout << endl;
//}
//void cut(int* ptr, int& size, int c)//cuts array size
//{
//	for (int i = c; i < (size - 1); i++)
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
//		for (int j = (i + 1); j < size; j++)
//		{
//			if (*(ptr + i) == *(ptr + j))
//			{
//				*(ptr + j) = 0;
//			}
//		}
//	}
//}
//void inter(int* ptr, int* ptr1, int s, int s1)//finds inter section
//{
//	int count = 0;
//	int* ptr2 = new int[s];
//	for (int i = 0; i < s; i++)
//	{
//		for (int j = 0; j < s1; j++)
//		{
//			if (*(ptr+i) == *(ptr1+j))
//			{
//				*(ptr2 + count) = *(ptr + i);
//				count++;
//			}
//		}
//	}
//	comp(ptr2, count);
//	int temp = 0;
//	for (int i = 0; i < count; i++)
//	{
//		for (int j = (i + 1); j < count; j++)
//		{
//			if (*(ptr2 + i) >= *(ptr2 + j))
//			{
//				temp = *(ptr2 + i);
//				*(ptr2 + i) = *(ptr2 + j);
//				*(ptr2 + j) = temp;
//			}
//		}
//	}
//	cout << "the compressed array is:" << endl;
//	for (int i = 0; i < count; i++)
//	{
//		cout << *(ptr2 + i) << " ";
//	}
//	cout << endl;
//	delete[]ptr2;
//}
//int main()
//{
//	int s1 = 0;
//	int s = 0;
//	cout << "enter the size of array1:";
//	cin >> s;
//	cout << "enter the size of array2:";
//	cin >> s1;
//	int* ptr = new int[s];
//	int* ptr1 = new int[s1];
//	in(ptr, s);
//	in(ptr1, s1);
//	inter(ptr, ptr1, s, s1);
//	delete[]ptr;
//	delete[]ptr1;
//	return 0;
//}