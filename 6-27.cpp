#include<iostream>
#include<string>

using namespace std;

class Employee
{
public:
	Employee(char *n, char *str, char *ct, char *z);
	void setName(char *n);
	void display();

private:
	char name[30];
	char street[30];
	char city[18];
	char zip[6];
};

Employee::Employee(char *n,char *str,char *ct,char *z)
{
	strcpy_s(name, n);
	strcpy_s(street, str);
	strcpy_s(city, ct);
	strcpy_s(zip, z);
}

void Employee::setName(char *n) {
	strcpy_s(name, n);
}

void Employee::display() {
	cout << name << "\t" << street << "\t";
	cout << city << "\t" << zip;
}

int main() {
	Employee e1("he", "ewe", "ewwew", "100011");
	e1.display();
	cout << endl;
	e1.setName("ds");
	e1.display();
	cout << endl;
	system("pause");
	return 0;

}