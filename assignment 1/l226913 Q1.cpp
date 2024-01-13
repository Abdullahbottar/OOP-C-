////Expand array
//#include <iostream>
//using namespace std;
//int main()
//{
//	int size = 0;
//	cout << "enter the size of array:";
//	cin >> size;
//	int* ptr = new int[size];
//	cout << "enter the array elements:" << endl;
//	cout << "if you enter -1 the array will be displayed:" << endl;
//	for (int i = 0; i < size; i++)
//	{
//		cout << "element at " << i << " index:";
//		cin >> *(ptr + i);
//		if (ptr[i] == -1)
//		{
//			*(ptr+i) = '\0';
//			size = i;
//			break;
//		}
//		if (i == (size - 1))
//		{
//			size *=2;
//			int* ptr1 = new int[size];//allocating new size to array
//			for (int i = 0; i < size; i++)
//			{
//				*(ptr1 + i) = *(ptr + i);//copying array memoery
//			}
//			delete[]ptr;//freeing older memeory
//			ptr = ptr1;//copying back memeory
//		}
//	}
//	cout << endl;
//	cout << "the original array:" << endl;
//	for (int i = 0; i < size; i++)
//	{
//		cout << *(ptr + i) << " ";
//	}
//	cout << endl;
//	int k = 0;
//	if (size % 2 == 0)
//	{
//		k = size / 2;
//	}
//	else
//	{
//		k = (size / 2) + 1;
//	}
//	int v = size - 1;
//	int temp = 0;
//	for (int i = 0; i < k; i++)
//	{
//		temp = *(ptr + i);
//		*(ptr + i) = *(ptr + v);
//		*(ptr + v) = temp;
//		v--;
//	}
//	cout << "the reverse array is:" << endl;
//	for (int i = 0; i < size; i++)
//	{
//		cout << *(ptr + i) << " ";
//	}
//	cout << endl;
//	delete[]ptr;
//	return 0;
//}