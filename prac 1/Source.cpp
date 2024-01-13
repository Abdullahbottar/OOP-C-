//#include <iostream>
//using namespace std;
//int** AllocateMemory(int row,int col) {
//	int** newarray = new int* [row];
//	for (int i = 0; i < row; i++) {
//		newarray[i] = new int[col];
//	}
//	return newarray;
//}
//void InputMatrix(int**matrix,int row,int col) {
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < col; j++) {
//			cout << "Enter the element at " << i << "th row & " << j << "th column: ";
//			cin >> matrix[i][j];
//		}
//	}
//}
//void DisplayMatrix(int**matrix,int row,int col) {
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < col; j++) {
//			cout << matrix[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//void swapTriangular(int**matrix,int row,int col) {
//	cout << "\nMatrix after swapping.\n";
//	for (int i = 0; i < 1; i++) {
//		for (int j = 0; j < col; j++) {
//			if (j == 0 && i == 0) {
//				continue;
//			}
//			else if(j != (col-1) && i == 0) {
//				int temp = matrix[(row - 1)][j];
//				matrix[(row - 1)][j] = matrix[(i)][j];
//				matrix[(i)][j] = temp;
//			}
//			else {
//				int temp = matrix[(row - 1)][0];
//				matrix[(row - 1)][0] = matrix[(i)][j];
//				matrix[(i)][j] = temp;
//			}
//		}
//	}
//	for (int i = 1; i < row; i++) {
//		for (int j = 0; j < 1; j++) {
//			if (i == (row - 1)) {
//				continue;
//			}
//			else {
//				int temp = matrix[i][j];
//				matrix[i][j] = matrix[i][col - 1];
//				matrix[i][col - 1] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	int rows, cols;
//	cout << "Enter the number of rows: ";
//	cin >> rows;
//	cout << "Enter the number of columns: ";
//	cin >> cols;
//	//Allocate memory for matrix
//	int** matrix = AllocateMemory(rows, cols);
//		// Input matrix elements from the user
//	InputMatrix(matrix, rows, cols);
//		// Display the input matrix
//	DisplayMatrix(matrix, rows, cols);
//
//	swapTriangular(matrix, rows, cols);
//	DisplayMatrix(matrix, rows, cols);
//
//
//	return 0;
//}