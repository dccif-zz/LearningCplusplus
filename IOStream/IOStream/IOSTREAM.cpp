#include<fstream>
#include<iostream>
using namespace std;

int main() {
	ofstream file1("test.txt");
	file1 << "已成功写入文件！";
	file1.close();

	char ch;
	ifstream file2("test.txt");
	while (file2.get(ch))
	{
		cout <<ch;
	}
	file2.close();

	ofstream file3("test.txt", ios::app);
	file3 << "已成功添加字符";
	file3.close();

	char ch1;
	ifstream file4("test.txt");
	while (file4.get(ch1)) {
		cout << ch;
	}
	file4.close();

	system("pause");
	return 0;
}