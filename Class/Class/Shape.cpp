#include<iostream>

using namespace std;


class Shape
{
public:
	Shape();
	~Shape();
	virtual float getArea() { return -1; }

};

class  Cicle:public Shape
{
public:
	 Cicle(float radius):itsRadius(radius){}
	 float getArea() { return 3.14*itsRadius*itsRadius; }
private:
	float itsRadius;
};

class Rectangle:public Shape
{
public:
	Rectangle(float len, float width) :itslen(len), itswid(width) {};
	virtual float getArea() { return itslen*itslen; }
	virtual float getlen() { return itslen; }
	virtual float getwid() { return itswid; }
private:
	float itslen;
	float itswid;
};

class Square :public Rectangle {
public:
	Square(float len);

};

Square::Square(float len):Rectangle(len, len){}

int main() {
	Shape *sp;
	sp = new Cicle(5);
	cout << "The area of the circle is " << sp->getArea() << endl;
	delete sp;
	sp = new Rectangle(4, 6);
	cout << "The area of the Rectangle is " << sp->getArea() << endl;
	delete sp;
	sp = new Square(5);
	cout << "The area of the Square is " << sp->getArea() << endl;
	delete sp;
	return 0;
	system("pause");
}


