#include<iostream>

using namespace std;

class Point
{
public:
	Point() { x = y = 0; }
	Point(unsigned xx, unsigned yy) { x = xx, y = yy; }

	unsigned getX() { return x; }
	unsigned getY() { return y; }
	void print() { cout << "Point(" << x << "," << y << ")" << endl; }

	friend Point operator+ (Point &pt, int change);
	friend Point operator+ (int change, Point &pt);

private:

	unsigned x;
	unsigned y;
};

Point operator+(Point & pt, int change)
{
	Point pttemp = pt;
	pttemp.x += change;
	pttemp.y += change;
	return pttemp;
}

Point operator+(int change, Point &pt)
{
	Point pttemp = pt;
	pttemp.x += change;
	pttemp.y += change;
	return pttemp;
}


int main() {
	Point p1(10, 10);
	p1.print();

	p1 = p1 + 7;
	p1.print();

	p1 = 12 + p1;
	p1.print();

	system("pause");
	return 0;
}