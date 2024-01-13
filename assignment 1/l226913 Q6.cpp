//#include <iostream>
//using namespace std;
//int** allocate(int& rows, int& cols)
//{
//	cout << "enter the number of rows:";
//	cin >> rows;
//	cout << "enter the number of cols:";
//	cin >> cols;
//	int** p = new int* [rows];
//	for (int i = 0; i < rows; i++)
//	{
//		p[i] = new int[cols];
//	}
//	return p;
//}
//void intialize(int** ptr, int rows, int cols)
//{
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			cout << "Enter the element at " << i << " row " << j << " col:";
//			cin>>*(*(ptr + i) + j);
//		}
//	}
//}
//void display(int** ptr, int rows, int cols)
//{
//	cout << "you have entered matrix:" << endl;
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			cout << *(*(ptr + i) + j) << "\t";
//		}
//		cout << endl;
//	}
//}
//void nonzero(int** ptr, int rows, int cols)
//{
//	cout << endl;
//	cout << "the non zero array is:" << endl;
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			while (*(*(ptr + i) + j) == 0)
//			{
//				j++;
//				if (j >= (cols))
//				{
//					break;
//				}
//			}
//			if (j >= (cols))
//			{
//				break;
//			}
//			cout << *(*(ptr + i) + j) <<"\t";
//		}
//		cout << endl;
//	}
//}
//void deallocate(int** ptr, int rows)
//{
//	for (int i = 0; i < rows; i++)
//	{
//		delete[]ptr[i];
//	}
//	delete[]ptr;
//}
//int main()
//{
//	int row = 0;
//	int col = 0;
//	int** ptr;
//	ptr = allocate(row, col);
//	intialize(ptr, row, col);
//	display(ptr, row, col);
//	nonzero(ptr, row, col);
//	deallocate(ptr, row);
//	system("pause");
//	return 0;
//}