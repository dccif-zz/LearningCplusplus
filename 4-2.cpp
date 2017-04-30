#include<iostream>
using namespace std;

enum cpu_rank {P1 =1,P2,P3,P4,P5,P6,P7};

class CPU{
public:
	CPU() {};
	CPU(cpu_rank r, int f,float v){
		rank = r;
		frequency = f;
		voltage = v;
		cout<<"这是一个"<<r<<"等级"<<f<<"频率"<<v<<"电压的CPU"<<endl;
	}
cpu_rank GetRank() const { return rank;}
int GetFrequency() const { return frequency;}
float GetVoltage() const { return voltage;}

void SetRank(cpu_rank r){rank = r;}
void SetFrequency(int f){frequency =f;}
void SetVoltage(float v){voltage = v;}

void Run(){cout<<"start"<<endl;}
void Stop(){cout<<"end"<<endl;}
//~CPU(){cout<<"! new"<<endl;}

private:
	cpu_rank rank;
	int frequency;
	float voltage;
};

class RAM
{
public:
	RAM() {};
	RAM(int f, float sz) {
		frequency = f;
		size = sz;
		cout << "这是一个有" << f << "Hz" << size << "G的内存" << endl;
	};
private:
	int frequency;
	float size;
};

class CDROM
{
public:
	CDROM() {};
	CDROM(bool hs) { HasOne = hs; cout << "这是一个带有" << HasOne << "的电脑" << endl; };
private:
	bool HasOne;
};

class COMPUTER
{
public:
	COMPUTER(){};
	COMPUTER(CPU One, RAM Two, CDROM Three){
		OneIn = One;
		TwoIn = Two;
		Three = Has;
	}


private:
	CPU OneIn;
	RAM TwoIn;
	CDROM Has;
};


int main(){
	CPU a(P1,300,2.8);
	/*a.Run();
	a.Stop();*/
	RAM Rom(1333,4);
	CDROM CD(true);
	COMPUTER HE(a,Rom,CD);
	
	system("pause");
}

