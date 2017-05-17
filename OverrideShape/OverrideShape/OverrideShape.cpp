#include<iostream>
#define PI 3.1415926
using namespace std;

class Shape
{
public:
	Shape() {};
	~Shape() {};
	virtual float getArea() = 0;
	virtual float getPerim() = 0;
};

class  Circle:public Shape
{
public:
	Circle(float radius) :itsRadius(radius) {};
	~Circle() {};
	float getArea() { return PI*itsRadius*itsRadius; }
	float getPerim() { return 2 * PI*itsRadius; }

private:
	float itsRadius;
};

class Rectangle :public Shape
{
public:
	Rectangle(float len, float width) :itsLength(len), itsWidth(width) {};
	~Rectangle() {};
	virtual float getArea() { return itsLength*itsWidth; }
	float getPerim() { return (2 * (itsWidth + itsLength)); }
	virtual float getlength() { return itsLength; }
	virtual float getwidth() { return itsWidth; }

private:
	float itsWidth;
	float itsLength;
};

int main() {
	Circle c1(4);
	Circle c2(10);
	Rectangle r1(2, 4);
	Rectangle r2(3, 4);

	Shape *all[] = { &c1,&c2,&r1,&r2};
	
	cout << "The area of the Circle c1 is: " << all[0]->getArea()<<"\n" << endl;
	cout << "The perimeter of the Circle c1 is: " << all[0]->getPerim()<<"\n" << endl;
	cout << "The area of the Circle c2 is: " << all[1]->getArea() <<"\n"<< endl;
	cout << "The perimeter of the Circle c2 is: " << all[1]->getPerim()<<"\n" << endl;

	cout << "The area of the Rectangle r1 is: " << all[2]->getArea()<<"\n" << endl;
	cout << "The perimeter of the Rectangle r1 is: " << all[2]->getPerim()<<"\n" << endl;
	cout << "The area of the Rectangle r2 is: " << all[3]->getArea() <<"\n"<< endl;
	cout << "The perimeter of the Rectangle r2 is: " << all[3]->getPerim()<<"\n" << endl;

	system("pause");

	return 0;
}