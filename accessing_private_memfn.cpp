#include<bits/stdc++.h>
using namespace std;

class triangle{
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

int triangle::area(){
	set();
	return height * width;
}

int main(void){
	triangle trg;
	cout << "area: " << trg.area() << " sq. unit"<< endl;	
	return 0;
}

