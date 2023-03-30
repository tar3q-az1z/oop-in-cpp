#include<bits/stdc++.h>
using namespace std;

class triangle{
	int height, width;
	public:
		void setDimension();
		void compareTri(int area1, triangle toCompare);
		int area(){
			return height * width;
		}
};

void triangle::setDimension(){
	cout << "height of triangle: ";
	cin >> height;
	cout << "width of triangle: ";
	cin >> width;
	cout << "-------------------------" << endl;
}

void triangle::compareTri(int area1, triangle toCompare){
	int area2 = toCompare.area();
	if(area1 > area2) cout << "first triangle is bigger." << endl;
	else if(area1 == area2) cout << "both triangle are of same area." << endl;
	else cout << "second triangle is bigger." << endl;
}

int main(void){
	triangle first, second;
	first.setDimension();
	second.setDimension();
	first.compareTri(first.area(), second);
	return 0;
}

