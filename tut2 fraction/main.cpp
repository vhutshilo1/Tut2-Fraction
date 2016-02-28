#include <iostream>

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
	~fraction();
private:
	int  n, d;        //private variables numerator and denominator


};

int main()
{
	

}