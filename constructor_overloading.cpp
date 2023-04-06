#include<bits/stdc++.h>
using namespace std;

class rectangle{
	int height, width;
	public:
		rectangle(){
			height = 10;
			width = 15;
		}
		rectangle(int height, int width){
			this->height = height;
			this->width = width;
		}
		void area(){
			cout << "Area is: " << height * width << " unit sq." << endl;
		}
};
int main(void){
	rectangle polygon1;
	rectangle polygon2(11, 10);
	polygon1.area();
	polygon2.area();
	return 0;
}

