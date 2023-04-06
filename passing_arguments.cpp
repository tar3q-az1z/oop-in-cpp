#include<bits/stdc++.h>
using namespace std;

class rectangle{
	int height, width;
	public:
		void setValue(int h, int w);
		int area();
};

void rectangle::setValue(int h, int w){
	height = h;
	width = w;
}

int rectangle::area(){
	return height * width;
}

int main(void){
	rectangle a;
	a.setValue(2, 3);
	cout << "area: " << a.area() << " unit area" << endl;
	return 0;
}

