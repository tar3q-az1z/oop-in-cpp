#include<bits/stdc++.h>
using namespace std;

class Complex{
	double real, imag;
	public:
		void set_clx(double real, double imag);
		void print_clx();
		Complex add(Complex obj);
};

void Complex::set_clx(double real, double imag){
	this->real = real;
	this->imag = imag;
}

void Complex::print_clx(){
	cout << "complex value is: " << real << " + " << imag << "j" << endl;
}

Complex Complex::add(Complex obj){
	Complex sum;
	sum.real = real + obj.real;
	sum.imag = imag + obj.imag;
	return sum;
}
int main(void){
	Complex num1, num2, num3;
	num1.set_clx(3.0, 5.0);
	num2.set_clx(2.0, -1.0);
	num3 = num1.add(num2);
	num3.print_clx();
	return 0;
}

