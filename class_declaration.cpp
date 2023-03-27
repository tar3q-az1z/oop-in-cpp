#include<bits/stdc++.h>
using namespace std;

class triangle{
	int height, width;
	public:
		void setValue(int h, int w);
		int area(){
			return height * width;
		}
};

void triangle::setValue(int h, int w){
	height = h;
	width = w;
}

int main(void){
	triangle a;
	int h, w;
	cout << "Value of height: ";
	cin >> h;
	cout << "Value of width: ";
	cin >> w;
	a.setValue(h, w);
	cout << "Area of triangle: " << a.area() << " unit area" << endl;
	return 0;
}
