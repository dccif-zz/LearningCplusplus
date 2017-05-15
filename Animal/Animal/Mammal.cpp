#include<iostream>
using namespace std;

enum myColour
{
	Black,White
};

class Mammal
{
public:
	Mammal();
	~Mammal();

	int getAge() const {
		return itsAge;
	}

	void setAge(int age) {
		itsAge = age;
	}

	int getWeight() const {
		return itsWeight;
	}

	void setWeight(int weight) {
		itsWeight = weight;
	}

	void speak() const {
		cout << "Mammal sound!\n";
	}

protected:
	int itsAge;
	int itsWeight;

};

class Dog: public Mammal{
public:
	Dog();
	~Dog();


	myColour getColour() const {
		return itsColour;
	}


	void setColour(myColour colour) {
		itsColour = colour;
	}

	void wagTail() {
		cout << "Tail wagging......\n";
	}

private:
	myColour itsColour;
};


Mammal::Mammal() :
	itsAge(1), itsWeight(5) {
	cout << "Mammal constructor......\n";
}


Mammal::~Mammal() {
	cout << "Mammal destructor......\n";
}


Dog::Dog() :
	itsColour(White) {
	cout << "Dog constructor...\n";

}


Dog::~Dog() {
	cout << "Dof destructor...\n";
}


int main() {
	Dog jack;
	jack.speak();
	jack.wagTail();
	cout << "jack is" << jack.getAge() << "years old\n";

	system("pause");
	return 0;
}


