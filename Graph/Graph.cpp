#include <iostream>
using namespace std;

void print_array(char** array, int rows, int cols)
{
	cout << "cout array" << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << array[i][j];
		}
		cout << endl;
	}
	cout << endl;
}

bool search_of_some_signs(char** array, int rows, int cols, int &x, int &y)
{
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (array[i][j] == '*') {
				x = i;
				y = j;
				return true;
				 while (int I = (x - i || x + i || j - 1 || j + 1) )
				 {
					 
				 }
			}
		}
	}
	return false;

}

int main()
{
	int rows, cols;
	cout << "give sizes of array: " << endl;
	cin >> rows >> cols;

	//alocation
	char** array = new char* [rows];
	for (int i = 0; i < rows; i++) {
		array[i] = new char[cols];
	}

	cout << "give capacity of array " << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cin >> array[i][j];
		}
	}
	cout << endl;

	print_array(array, rows, cols);
	
	int x, y;
	if (search_of_some_signs(array, rows, cols, x, y)) {
		cout << "array has *" << x << " " << y << endl;
	}
	else {
		cout << "array hasn't *" << endl;
	}

	//clean of memory
	for (int i = 0; i < rows; i++) {
		delete[] array[i];
	}
	delete[] array;

	return 0;
}
