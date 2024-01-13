//#include <iostream>
//using namespace std;
//class matrix
//{
//	int row;
//	int col;
//	int** p;
//public:
//	matrix()
//	{
//		row = 0;
//		col = 0;
//		p = new int* [row];
//		for (int i = 0; i < row; i++)
//		{
//			p[i] = new int[col];
//		}
//	}
//	matrix(int row, int col)
//	{
//		this->row=row;
//		this->col=col;
//		p = new int* [row];
//		for (int i = 0; i < row; i++)
//		{
//			p[i] = new int[col];
//		}
//		cout << "enter the value in matrix\n";
//		for (int i = 0; i < row; i++)
//		{
//			for (int j = 0; j < col; j++)
//			{
//				cout << "index " << i << " col " << j << " :";
//				cin >> p[i][j];
//			}
//		}
//		cout << "\n";
//	}
//	void disply()
//	{
//		for (int i = 0; i < row; i++)
//		{
//			for (int j = 0; j < col; j++)
//			{
//				cout << p[i][j] << " ";
//			}
//			cout << "\n";
//		}
//		cout << "\n";
//	}
//	void operator++()
//	{
//		for (int i = 0; i < row; i++)
//		{
//			for (int j = 0; j < col; j++)
//			{
//				++(p[i][j]);
//			}
//		}
//	}
//	void operator++(int)
//	{
//		for (int i = 0; i < row; i++)
//		{
//			for (int j = 0; j < col; j++)
//			{
//				(p[i][j])++;
//			}
//		}
//	}
//	void operator--()
//	{
//		for (int i = 0; i < row; i++)
//		{
//			for (int j = 0; j < col; j++)
//			{
//				--(p[i][j]);
//			}
//		}
//	}
//	void operator--(int)
//	{
//		for (int i = 0; i < row; i++)
//		{
//			for (int j = 0; j < col; j++)
//			{
//				(p[i][j])--;
//			}
//		}
//	}
//	void setrow(int r)
//	{
//		for (int i = 0; i < col; i++)
//		{
//			cout << "rows " << r << " :";
//			cin >> p[r][i];
//	    }
//	}
//	void setcol(int c)
//	{
//		for (int i = 0; i < row; i++)
//		{
//			cout << "col " << c << " :";
//			cin >> p[i][c];
//		}
//	}
//	int* getrow(int r)
//	{
//		return p[r];
//	}
//	int* getcol(int c)
//	{
//		int* cols = new int[row];
//		for (int i = 0; i < row; i++)
//		{
//			cols[i] = p[i][c];
//		}
//		return cols;
//	}
//	~matrix()
//	{
//		for (int i = 0; i < row; i++)
//		{
//			delete[]p[i];
//		}
//		delete[]p;
//		p = NULL;
//	}
//
//};
//int main()
//{
//	matrix obj1(2,2);
//	obj1.disply();
//	obj1++;
//	obj1.disply();
//	++obj1;
//	obj1.disply();
//	obj1--;
//	obj1.disply();
//	--obj1;
//	obj1.disply();
//	obj1.setcol(1);
//	obj1.disply();
//	obj1.setrow(0);
//	obj1.disply();
//
//	system("pause");
//	return 0;
//}