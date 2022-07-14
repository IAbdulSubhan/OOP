#include <iostream>
using namespace std;

class OOPLAB
{
public:
	int val=0;
	OOPLAB(int num1=3,int num2=4)  //Default Constructor
	{
		val=num1+num2;
	}
	void PrintValue()
	{
		cout<<"Answer is equal to  "<<val<<endl;
	}
};

int main()
{
	OOPLAB quiz;
	quiz.PrintValue();
	return 0;
}