#include<bits/stdc++.h>
using namespace std;

class rectangle{
	int height, width;
	public:
		void setDimension();
		void compareTri(int area1, rectangle toCompare);
		int area(){
			return height * width;
		}
};

void rectangle::setDimension(){
	cout << "height of rectangle: ";
	cin >> height;
	cout << "width of rectangle: ";
	cin >> width;
	cout << "-------------------------" << endl;
}

void rectangle::compareTri(int area1, rectangle toCompare){
	int area2 = toCompare.area();
	if(area1 > area2) cout << "first rectangle is bigger." << endl;
	else if(area1 == area2) cout << "both rectangle are of same area." << endl;
	else cout << "second rectangle is bigger." << endl;
}

int main(void){
	rectangle first, second;
	first.setDimension();
	second.setDimension();
	first.compareTri(first.area(), second);
	return 0;
}

