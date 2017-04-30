#include<iostream>
using namespace std;

enum cpu_rank {P1 =1,P2,P3,P4,P5,P6,P7};

class CPU{
public:
	CPU(cpu_rank r, int f,float v){
		rank = r;
		frequency = f;
		voltage = v;
		cout<<"a new CPU"<<endl;
	}
cpu_rank GetRank() const { return rank;}
int GetFrequency() const { return frequency;}
float GetVoltage() const { return voltage;}

void SetRank(cpu_rank r){rank = r;}
void SetFrequency(int f){frequency =f;}
void SetVoltage(float v){voltage = v;}

void Run(){cout<<"start";}
void Stop(){cout<<"end";}
~CPU(){cout<<"! new"<<endl;}

private:
	cpu_rank rank;
	int frequency;
	float voltage;
};

int main(){
	CPU a(P1,300,2.8);
	a.Run();
	a.Stop();
	system("pause");
}

