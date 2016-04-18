#include <iostream>
#include "Tut2Version2.h"
using namespace std;

fraction::fraction()    // the contructor

{
}
void fraction::add(fraction value)   //adition operation
{
	n = (n*(value.d)) + ((value.n)*d);								 //the numerator sum answer
	d = ((value.d)*d);										//the denominator sum answer
}
void fraction::subtract(fraction value) {             //subtraction operation

	n = (n*(value.d)) - ((value.n)*d);								 //the numerator sum answer
	d = ((value.d)*d);
}
void fraction::multiply(fraction value) {           //multiplication operation
	n = n*(value.n);
	d = d*(value.d);

}
void fraction::divide(fraction value) {            //division operation
	n = n*(value.d);
	d = d*(value.n);
}

void fraction::getnumdenom(int &num, int &denom)   //get number method
{
	denom = d;
	num = n;

}
void fraction::setnumdenom(int num, int denom) {     //set number method


	d = denom;
	n = num;

}
void fraction::print() {
	cout << n << "/" << d << endl;
	//function to print the displayed fractional number
}

//using overloading for respective functions for different operation

//for addition fraction
fraction fraction::operator+(fraction value) {
	//variables of storing passed and returned values 
	int  num1, denom1;
	fraction obj;
	num1 = (n*(value.d)) + ((value.n)*d);
	denom1 = d*(value.d);
	obj.setnumdenom(num1, denom1);
	return obj;
}

//for subtraction
fraction fraction::operator -(fraction value)
{
	int  num1, denom1;
	fraction obj;
	num1 = (n*(value.d)) - ((value.n)*d);
	denom1 = d*(value.d);
	obj.setnumdenom(num1, denom1);
	return obj;
}
//for multiplication
fraction fraction::operator*(fraction value)
{
	int num1, denom1;
	fraction obj;

	num1 = n*(value.n);
	denom1 = d*(value.d);
	obj.setnumdenom(num1, denom1);
	return obj;
}
//for division
fraction fraction::operator/(fraction value)
{
	int  num1, denom1;
	fraction obj;

	num1 = n*(value.d);
	denom1 = d*(value.n);
	obj.setnumdenom(num1, denom1);
	return obj;
}
fraction::~fraction()
{
}


int main()
{

	//testing functions
	fraction A, B, C, D, E, F;
	int Denom, Num;
	cout << "Fraction A" << endl;
	cout << "Enter the numerator and denominator respectivery:  ";
	cin >> Num >> Denom;
	A.setnumdenom(Num, Denom);
	cout << "\n\n\n" << endl;

	cout << "Fraction B" << endl;
	cout << "Enter the numerator and denominator respectivery:  ";
	cin >> Num >> Denom;
	B.setnumdenom(Num, Denom);
	cout << "\n\n\n" << endl;



	//copy B into D 

	cout << "fraction A is ";
	A.print();
	cout << "fraction A is ";
	B.print();

	C = A + B;
	A.add(B);   //adding fractions A and B
	A.print();
	C.print();
	return 0;
}
