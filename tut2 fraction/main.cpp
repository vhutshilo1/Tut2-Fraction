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
fraction::fraction()    //constructor

{
}
void fraction::add(fraction value)   //addition operation
{
	int num, denom;
	value.getnumdenom(num, denom);      // extracts the  numerator and denominator of fraction 'value' 
	n = n*denom + num*d;               //the numerator sum answer
	d = d*denom;                      //the denominator sum answer
}
void fraction::subtract(fraction value) {             //subtraction operation
	int num, denom;
	value.getnumdenom(num, denom);
	n = n*denom - num*d;                     //the numerator difference answer
	d = d*denom;                               //the denominator difference answer
}
void fraction::multiply(fraction value) {           //multiplication operation
	int num, denom;
	value.getnumdenom(num, denom);
	n = n*num;                                        //the numerator product answer
	d = d*denom;                                      //the denominator product answer

}
void fraction::divide(fraction value) {            //division operation
	int num, denom;
	value.getnumdenom(num, denom);
	n = n*denom;                                   //the numerator quotient answer
	d = d*num;                                     //the denominator quotient answer
}
int main()
{
	

}