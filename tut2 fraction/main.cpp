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
	fraction operator + (fraction);
	fraction operator - (fraction);
	fraction operator * (fraction);
	fraction operator / (fraction);
	~fraction();
private:
	int  n, d;        //private variables numerator and denominato


};
fraction::fraction()    // the contructor

{
}
void fraction::add(fraction value)   //adition operation
{
	int num, denom;
	value.getnumdenom(num, denom);      // extracts the  numerator and denominator of fraction 'value' 
	n = n*denom + num*d;               //the numerator sum answer
	d = d*denom;                      //the denominator sum answer
}
void fraction::subtract(fraction value) {             //subtraction operation
	int num, denom;
	value.getnumdenom(num, denom);
	n = n*denom - num*d;
	d = d*denom;
}
void fraction::multiply(fraction value) {           //multiplication operation
	int num, denom;
	value.getnumdenom(num, denom);
	n = n*num;
	d = d*denom;

}
void fraction::divide(fraction value) {            //division operation
	int num, denom;
	value.getnumdenom(num, denom);
	n = n*denom;
	d = d*num;
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
void fraction::print() {                                //function to print the displayed fractional number
	int whole, numerator, denominator;
	whole = n / d;
	numerator = (n%d);
	denominator = d;

	if (whole != 0) {
		cout << whole << " ";
	}
	if (numerator != 0) {
		cout << numerator << "/" << denominator;
	}
}

//using overloading for respective functions for different operation

//for addition fraction
fraction fraction::operator + (fraction value) {
	//variables of storing passed and returned values 
	int num, denom, num1, denom1;
	fraction obj;
	value.getnumdenom(num, denom);
    num1= n*denom + num*d;
    denom1= d*denom;
    obj.setnumdenom(num1, denom1);
	return obj;
}

//for subtraction
fraction fraction::operator -(fraction value)
{
	int num, denom, num1, denom1;
	fraction obj;
	value.getnumdenom(num, denom);
	num1 = n*denom - num*d;
	denom1 = d*denom;
	obj.setnumdenom(num1, denom1);
	return obj;
}
//for multiplication
fraction fraction::operator*(fraction value)
{
	int num, denom, num1, denom1;
	fraction obj;
	value.getnumdenom(num, denom);
	num1 = n*num;
	denom1 = d*denom;
	obj.setnumdenom(num1, denom1);
	return obj;
}
//for division
fraction fraction::operator/(fraction value)
{
	int num, denom, num1, denom1;
	fraction obj;
	value.getnumdenom(num, denom);
	num1 = n*denom;
	denom1 = d*num;
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

	cout << "Fraction c" << endl;
	cout << "Enter the numerator and denominator respectivery:  ";
	cin >> Num >> Denom;
	C.setnumdenom(Num, Denom);
	cout << "\n\n\n" << endl;

	A.add(B);   //adding fractions A and B
	B.multiply(C);

	//copy B into D 
	B.getnumdenom(Num,Denom);
	D.setnumdenom(Num, Denom);
	
	D.divide(A);
	//.......

	cout << "fraction A is ";
	A.print();
	cout << "\n\n\nfraction B is ";
	A.print();
	cout << "\n\n\nfraction C is ";
	A.print();
	cout << "\n\nfraction D is ";
	A.print();

}
