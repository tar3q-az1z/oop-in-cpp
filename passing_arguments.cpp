#include<bits/stdc++.h>
using namespace std;

class triangle{
	int height, width;
	public:
		void setValue(int h, int w);
		int area();
};

void triangle::setValue(int h, int w){
	height = h;
	width = w;
}

int triangle::area(){
	return height * width;
}

int main(void){
	triangle a;
	a.setValue(2, 3);
	cout << "area: " << a.area() << " unit area" << endl;
	return 0;
}

