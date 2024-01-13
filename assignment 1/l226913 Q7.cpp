//#include <iostream>
//using namespace std;
//void fill(int** ptr, int* col, int row)
//{
//	cout << "enter the postive values for array:" << endl;
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col[i]; j++)
//		{
//			cout << "element at " << i << " row " << j << " col:";
//			cin >> *(*(ptr + i) + j);
//			while (*(*(ptr + i) + j) <= 0)
//			{
//				cout << "re-enter value:";
//				cin >> *(*(ptr + i) + j);
//			}
//		}
//	}
//	cout << endl;
//}
//int sum(int row, int* col)
//{
//	int count = 0;
//	for (int i = 0; i < row; i++)
//	{
//		count += col[i];
//	}
//	return count;
//}
//int* twotoone(int** ptr, int* col, int row,int count)
//{
//	int* q = new int[count];
//	int c = 0;
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col[i]; j++)
//		{
//			*(q + c) = *(*(ptr + i) + j);
//			c++;
//		}
//	}
//	return q;
//}
//void sort(int* arr, int count)
//{
//	int temp = 0;
//	for (int i = 0; i < count; i++)
//	{
//		for (int j = (i+1); j < count; j++)
//		{
//			if (*(arr + i) >= *(arr + j))
//			{
//				temp = *(arr + i);
//				*(arr + i) = *(arr + j);
//				*(arr + j) = temp;
//			}
//		}
//	}
//}
//void showarr(int* arr, int count)
//{
//	cout << "The sorted 1D array is:" << endl;
//	for (int i = 0; i < count; i++)
//	{
//		cout << *(arr + i) << ",";
//	}
//	cout << endl;
//}
//int main()
//{
//	int row = 0;
//	cout << "enter the number of rows:";
//	cin >> row;
//	int* col = new int[row];
//	cout << "enter the column size for each row:" << endl;
//	for (int i = 0; i < row; i++)
//	{
//		cout << "column for row " << i << " :";
//		cin >> *(col + i);
//		while (*(col + i)<=0)
//		{
//			cout << "re-enter the value:";
//			cin >> *(col + i);
//		}
//	}
//	int** ptr = new int* [row];
//	for (int i = 0; i < row; i++)
//	{
//		ptr[i] = new int[col[i]];
//	}
//	int* arr;
//	fill(ptr, col, row);
//	int count = sum(row, col);
//	arr = twotoone(ptr, col, row,count);
//	sort(arr, count);
//	showarr(arr, count);
//	delete[]arr;
//	for (int i = 0; i < row; i++)
//	{
//		delete[]ptr[i];
//	}
//	delete[]ptr;
//	system("pause");
//	return 0;
//}