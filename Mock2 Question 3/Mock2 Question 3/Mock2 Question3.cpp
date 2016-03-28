//******Question 3*****
//Question 3 has 3 parts.
//3.1		Using the MINIMAL "Time" class provided,overload the less than operator to work with objects
//			of class "Time" as a MEMEBER FUNCTION.
//3.2		Create a driver program to test your (<) operator.

#include<iostream>
using namespace std;

class Time
{
private:
	
	int Hours;	//hours
	int Mins;	//minutes

public:

	Time(int h, int m) :Hours(h) ,Mins(m) {};
	void print() { cout << Hours << ":" << Mins; }

};                                 

//******************************GOOD LUCK***********************************