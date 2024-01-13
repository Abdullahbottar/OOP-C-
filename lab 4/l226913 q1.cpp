//#include <iostream>
//using namespace std;
//char** allocate(int& rows, int& cols)
//{
//	cout << "enter the number of rows:";
//	cin >> rows;
//	cout << "enter the number of cols:";
//	cin >> cols;
//	char** p = new char* [rows];
//	for (int i = 0; i < rows; i++)
//	{
//		p[i] = new char[cols];
//	}
//	return p;
//}
//void input(char** ptr, int rows, int cols)
//{
//	cout << "enter the elements of array:" << endl;
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			cout << "element at row " << i << " col " << j << " is:";
//			cin >> ptr[i][j];
//		}
//	}
//	cout << endl;
//}
//void display(char** ptr, int rows, int cols)
//{
//	cout << "you have entered matrix:" << endl;
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			cout << ptr[i][j] << "\t";
//		}
//		cout << endl;
//	}
//}
//void mincol(char** ptr, int rows, int cols)
//{
//	char* p = new char[cols];
//	int j = 0;
//	int i = 0;
//	int k = 0;
//	while (j < cols)
//	{
//		p[j] = ptr[i][j];
//		for (i = 0; i < (rows-1); i++)
//		{
//			if (p[j] < ptr[i+1][j])
//			{
//				i++;
//				if (i == (rows - 1))
//				{
//					break;
//				}
//			}
//			else if (p[j] > ptr[i + 1][j])
//			{
//				p[j] = ptr[i + 1][j];
//			}
//			else
//			{
//				continue;
//			}
//		}
//		j++;
//	}
//	cout << endl;
//	cout << "the minimum element in each column is:" << endl;
//	for (int i = 0; i < cols; i++)
//	{
//		cout << p[i] << " ";
//	}
//	cout << endl;
//	delete[]p;
//}
//void tran(char** ptr, int rows, int cols)
//{
//	cout << endl;
//	cout << "The transpose is:" << endl;
//	for (int i = 0; i < cols; i++)
//	{
//		for (int j = 0; j < rows; j++)
//		{
//			cout << ptr[j][i] << "\t";
//		}
//		cout << endl;
//	}
//}
//void deallocate(char** ptr, int rows, int cols)
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
//	char** ptr;
//	ptr = allocate(rows, cols);
//	input(ptr, rows, cols);
//	display(ptr, rows, cols);
//	mincol(ptr, rows, cols);
//	tran(ptr, rows, cols);
//	deallocate(ptr, rows, cols);
//
//
//	system("pause");
//	return 0;
//}