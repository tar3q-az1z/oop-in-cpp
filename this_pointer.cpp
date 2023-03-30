#include<bits/stdc++.h>
using namespace std;

class triangle{
	int height, width;
	public:
		void set(int height, int width);
		void print(){
			cout << "height: " << height << endl;
			cout << "width: " << width << endl;
			//cout << "address: " << this << endl;
		}
};

void triangle::set(int height, int width){
	this->height = height;
	this->width = width;
}

int main(void){
	triangle trg;
	trg.set(30, 15);
	trg.print();
	return 0;
}

