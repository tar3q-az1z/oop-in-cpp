#include<bits/stdc++.h>
using namespace std;

class rectangle{
	int height, width;
	public:
		rectangle(){   // for default init.
			height = 100;
			width = 100;
		}
		void show();
};
void rectangle::show(){
	cout << "----- Rectangle Data -----" << endl;
	cout << "Height: " << height << " unit." << endl;
	cout << "Width: " << width << " unit." << endl;
}
int main(void){
	rectangle poly;
	poly.show();
	return 0;
}

