#include<bits/stdc++.h>
using namespace std;

class rectangle{
	int height, width;
	void set(){
		cout << "height: ";
		cin >> height;
		cout << "width: ";
		cin >> width;
	}
	public:
		int area();
};

int rectangle::area(){
	set();
	return height * width;
}

int main(void){
	rectangle trg;
	cout << "area: " << trg.area() << " sq. unit"<< endl;	
	return 0;
}

