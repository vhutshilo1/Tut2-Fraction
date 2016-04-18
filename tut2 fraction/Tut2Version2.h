#ifndef TUT2VERSION2_H
#define TUT2VERSION2_H
#include<iostream>
#include<string>
using namespace std;


class fraction

{
public:
	fraction();
	void add(fraction);
	void subtract(fraction);
	void multiply(fraction);
	void divide(fraction);
	void print();
	void getnumdenom(int &num, int &denom);
	void setnumdenom(int num, int denom);
	fraction operator + (fraction);
	fraction operator - (fraction);
	fraction operator * (fraction);
	fraction operator / (fraction);
	~fraction();
private:
	int  n, d;        //private variables numerator and denominator....


};

#endif
