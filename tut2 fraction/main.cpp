#include <iostream>

using namespace std;
class fraction

{
public://declaring function members
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
void fraction::getnumdenom(int &num, int &denom)
{
	denom = d;
	num = n;

}
void fraction::setnumdenom(int num, int denom) {


	d = denom;
	n = num;

}
void fraction::print() {
	int whole, numerator, denominator;
	whole = n / d;                       //extracting the whole part of a fraction
	numerator = (n%d);                    //extracting the numerator part of a fraction
	denominator = d;                     //extracting the denominator part of a fraction

	if (whole != 0) {                     //setting conditions for displaying values
		cout << whole << " ";
	}
	if (numerator != 0) {
		cout << numerator << "/" << denominator;
	}
}
fraction::~fraction()                      //destructor
{
}

int main()
{
	

}