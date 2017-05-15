#include<iostream>

using namespace std;

class Mammal
{
public:
	Mammal() {
		cout << "Mammal constructor...\n";
	}
	virtual ~Mammal(){
		cout << "Mammal destrucot...\n";
	}
	virtual void speak() const {
		cout << "Mammal speak !\n";
	}

};

class Dog:public Mammal
{
public:
	Dog() {
		cout << "Dog constructor......\n";
	}
	~Dog() {
		cout << "Dog destructor......\n";
	}
	void Speak() const{
		cout << "Woof!\n";
	}

};


int main() {
	Mammal *poiDog = new Dog;
	poiDog->speak();
	delete poiDog;
	system("pause");
	return 0;
}


