#include<iostream>
using namespace std;

int main() {
	int row, line, i, j;
	int **a;
	cout << "input row line" << endl;
	cin >> row;
	cin >> line;

	a = (int **)malloc(sizeof(int)*row);
	for (j = 0; j < row; j++) {
		a[j] = (int *)malloc(sizeof(int)*line);
	}

	cout << "input" << row << "*" << line << endl;

	for (j = 0; j < row; j++) {
		for (i = 0; i < line; i++) {
			cin >> a[j][i];
		}
	}

	cout << "Original matrix:" << endl;
	for (j = 0; j < row; j++) {
		for (i = 0; i < line; i++) {
			cout << a[j][i];
		}
		cout << endl;
	}

	cout << "Transpose" << endl;
	for (i = 0; i < line; i++) {
		for (j = 0; j < row; j++) {
			cout << a[j][i];
		}
		cout << endl;
	}
	system("pause");

}