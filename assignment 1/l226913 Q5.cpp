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
//			*(*(ptr+i)+j) = 0;
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
//	int rows = 0;
//	int cols = 0;
//	int** ptr;
//	ptr = allocate(rows, cols);
//	intialize(ptr, rows, cols);
//	display(ptr, rows, cols);
//	deallocate(ptr, rows);
//	system("pause");
//	return 0;
//}
