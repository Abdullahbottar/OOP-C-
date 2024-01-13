//#include <iostream>
//using namespace std;
//int *allocatememory(int& s)
//{
//	cout << "Enter the size of array:";
//	cin >> s;
//	int* ptr = new int[s];
//	return ptr;
//}
//void InputMatrix(int* p, int s)
//{
//	cout << "\nEnter the array" << endl;
//	for (int i = 0; i < s; i++)
//	{
//		cout << "enter the element at " << i << " index:";
//		cin >> p[i];
//	}
//	cout << endl;
//}
//void displaymatrix(int* p, int s)
//{
//	cout << "YOU HAVE ENTERED:" << endl;
//	for (int i = 0; i < s; i++)
//	{
//		cout << p[i] << ",";
//	}
//}
//void maxrows(int* p, int s)
//{
//	int max = 0;
//	for (int i = 0; i < s; i++)
//	{
//		for (int j = (i+1); j < s; j++)
//		{
//			if (p[i] >= p[j])
//			{
//				max = p[i];
//			}
//		}
//	}
//	cout << endl;
//	cout << "Largest number in the row is: " << max << endl;
//}
//void deallocatememory(int* p, int s)
//{
//	delete[] p;
//}
//int main()
//{
//	int s = 0;
//	int * ptr = allocatememory(s);
//	InputMatrix(ptr, s);
//	displaymatrix(ptr, s);
//	maxrows(ptr, s);
//	deallocatememory(ptr, s);
//	return 0;
//}